#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25224;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)60334;
unsigned char var_7 = (unsigned char)112;
unsigned char var_8 = (unsigned char)78;
unsigned char var_9 = (unsigned char)69;
long long int var_12 = -3868449921150999432LL;
int zero = 0;
unsigned short var_17 = (unsigned short)52080;
unsigned short var_18 = (unsigned short)36524;
short var_19 = (short)3879;
unsigned char var_20 = (unsigned char)242;
short var_21 = (short)-8727;
unsigned int var_22 = 1110413156U;
unsigned int arr_2 [25] ;
unsigned int arr_3 [25] ;
int arr_11 [11] [11] [11] ;
int arr_4 [25] ;
int arr_15 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 3876619760U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 1978360972U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 1789408902;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 1719230873;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = 72299879;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
