#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 516555778;
short var_1 = (short)6251;
unsigned short var_2 = (unsigned short)22297;
unsigned int var_3 = 3553860282U;
unsigned int var_4 = 833541306U;
short var_5 = (short)2951;
short var_6 = (short)-20867;
short var_7 = (short)-15676;
long long int var_8 = -7423822645422769430LL;
unsigned short var_9 = (unsigned short)47729;
short var_10 = (short)27725;
unsigned short var_11 = (unsigned short)60930;
unsigned int var_12 = 1600938005U;
int zero = 0;
int var_15 = 297710394;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-7059;
unsigned char arr_8 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)47 : (unsigned char)52;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
