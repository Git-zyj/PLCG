#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17554;
unsigned int var_1 = 276293145U;
short var_3 = (short)24199;
short var_5 = (short)20005;
long long int var_7 = -4754428656141094395LL;
unsigned int var_8 = 1251190281U;
unsigned short var_10 = (unsigned short)21795;
unsigned short var_13 = (unsigned short)53728;
unsigned int var_14 = 2053725421U;
unsigned short var_15 = (unsigned short)56068;
int zero = 0;
unsigned short var_16 = (unsigned short)49901;
unsigned short var_17 = (unsigned short)30029;
unsigned short var_18 = (unsigned short)54533;
unsigned int var_19 = 3702124637U;
long long int var_20 = 7836110658668245404LL;
long long int arr_0 [13] ;
unsigned short arr_1 [13] ;
long long int arr_2 [13] [13] [13] ;
short arr_5 [13] [13] [13] ;
unsigned short arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -8580465555945451947LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)49465;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2813543018946012058LL : 8289741038912449023LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-8434;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)14537 : (unsigned short)13400;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
