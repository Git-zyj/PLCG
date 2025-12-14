#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)101;
int var_4 = -908280350;
unsigned short var_6 = (unsigned short)22452;
unsigned short var_8 = (unsigned short)63279;
unsigned int var_11 = 485609244U;
unsigned char var_13 = (unsigned char)81;
short var_14 = (short)-16084;
int zero = 0;
unsigned int var_15 = 1325587625U;
signed char var_16 = (signed char)-33;
unsigned int var_17 = 3623940062U;
short var_18 = (short)-12871;
unsigned int var_19 = 1745560713U;
unsigned long long int arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 12802969605817321530ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
