#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9229;
long long int var_1 = 7650593944450472276LL;
long long int var_3 = -7107129822170519869LL;
long long int var_4 = -8151362099645747212LL;
unsigned char var_5 = (unsigned char)53;
unsigned int var_6 = 395687999U;
long long int var_8 = -4006555778369515445LL;
_Bool var_10 = (_Bool)0;
long long int var_11 = -3232147182506043139LL;
int var_12 = -417321513;
unsigned char var_13 = (unsigned char)216;
int zero = 0;
unsigned int var_14 = 2400744987U;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-6287;
unsigned short var_17 = (unsigned short)19346;
short var_18 = (short)618;
_Bool var_19 = (_Bool)0;
short var_20 = (short)29598;
short var_21 = (short)-9190;
unsigned long long int arr_0 [15] ;
short arr_1 [15] ;
_Bool arr_2 [23] [23] ;
unsigned long long int arr_3 [23] [23] ;
unsigned short arr_4 [23] ;
short arr_5 [10] ;
unsigned long long int arr_6 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 6466360502382122186ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)22963;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 13205516226365964294ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned short)6238;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (short)-31862;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = 15498234085623010062ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
