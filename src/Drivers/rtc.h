#include "../common.h"
#include "../all_drivers.h"

int century_register;
unsigned char second;
unsigned char minute;
unsigned char hour;
unsigned char day;
unsigned char month;
unsigned int year;

 
 
enum {
      cmos_address = 0x70,
      cmos_data    = 0x71
};

