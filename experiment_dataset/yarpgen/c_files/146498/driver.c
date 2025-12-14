#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39277;
unsigned long long int var_3 = 10597387802875852780ULL;
unsigned char var_4 = (unsigned char)129;
unsigned char var_5 = (unsigned char)185;
unsigned int var_6 = 3354843559U;
short var_13 = (short)-9673;
short var_14 = (short)2211;
short var_15 = (short)32459;
long long int var_17 = -6579741818678530594LL;
int zero = 0;
unsigned char var_18 = (unsigned char)254;
short var_19 = (short)14772;
short var_20 = (short)-14913;
signed char var_21 = (signed char)-100;
unsigned long long int var_22 = 10645843624915416895ULL;
unsigned short var_23 = (unsigned short)36161;
unsigned short var_24 = (unsigned short)8080;
unsigned long long int var_25 = 9784236190388551813ULL;
unsigned char var_26 = (unsigned char)13;
unsigned short var_27 = (unsigned short)27141;
unsigned int var_28 = 912802958U;
int arr_0 [24] [24] ;
unsigned long long int arr_1 [24] ;
unsigned char arr_2 [24] ;
short arr_6 [24] ;
unsigned char arr_7 [24] [24] ;
int arr_3 [24] ;
short arr_9 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = -462137356;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 18015967315828574322ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (short)17413;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 415113923;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)-15079;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
