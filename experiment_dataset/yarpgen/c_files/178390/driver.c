#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-91;
unsigned short var_1 = (unsigned short)63230;
int var_2 = 225413335;
signed char var_5 = (signed char)-46;
signed char var_8 = (signed char)63;
unsigned char var_9 = (unsigned char)178;
int var_10 = 30109625;
int var_11 = -173649756;
unsigned short var_12 = (unsigned short)13441;
int zero = 0;
unsigned long long int var_14 = 1379721238019468551ULL;
short var_15 = (short)27833;
unsigned int var_16 = 1744571864U;
unsigned char var_17 = (unsigned char)90;
signed char var_18 = (signed char)-30;
unsigned short arr_0 [16] [16] ;
unsigned short arr_4 [16] [16] ;
unsigned long long int arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)48471 : (unsigned short)1589;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)10963;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 10049826024476002397ULL : 11068094877668237193ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
