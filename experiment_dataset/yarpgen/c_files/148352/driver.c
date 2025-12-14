#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 1239023615200339142ULL;
unsigned short var_6 = (unsigned short)44173;
int var_8 = 1340322721;
unsigned long long int var_9 = 11720054538029102863ULL;
unsigned long long int var_10 = 7855163595839714975ULL;
int var_11 = -963460644;
signed char var_13 = (signed char)95;
unsigned long long int var_14 = 5012585946680069676ULL;
unsigned int var_15 = 3554382405U;
unsigned short var_18 = (unsigned short)36110;
int zero = 0;
unsigned char var_20 = (unsigned char)200;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
short var_23 = (short)-4031;
unsigned long long int var_24 = 9214751746030987958ULL;
unsigned short var_25 = (unsigned short)25778;
unsigned short var_26 = (unsigned short)58505;
unsigned int var_27 = 2263613162U;
unsigned char arr_0 [20] [20] ;
unsigned long long int arr_1 [20] ;
unsigned long long int arr_2 [20] ;
unsigned int arr_4 [20] ;
short arr_5 [20] [20] ;
unsigned char arr_6 [20] [20] ;
unsigned char arr_10 [20] ;
unsigned char arr_7 [20] ;
signed char arr_8 [20] [20] ;
_Bool arr_11 [20] ;
unsigned long long int arr_12 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 10805727014272643813ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 6416553446026105050ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1636914681U : 2621464472U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (short)28578;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)248 : (unsigned char)71;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (unsigned char)24;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)83 : (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)105 : (signed char)19;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_11 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = 7044813982478646101ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
