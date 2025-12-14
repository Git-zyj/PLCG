#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1519939774;
short var_2 = (short)5001;
signed char var_3 = (signed char)19;
unsigned short var_7 = (unsigned short)41805;
_Bool var_9 = (_Bool)0;
unsigned int var_12 = 2083010574U;
int zero = 0;
unsigned int var_13 = 3323656335U;
unsigned long long int var_14 = 6374633490848141110ULL;
unsigned char var_15 = (unsigned char)207;
signed char var_16 = (signed char)72;
signed char var_17 = (signed char)-125;
unsigned char var_18 = (unsigned char)202;
_Bool var_19 = (_Bool)0;
short var_20 = (short)7516;
unsigned int var_21 = 1014407458U;
signed char var_22 = (signed char)118;
int var_23 = 522485068;
signed char var_24 = (signed char)24;
unsigned long long int arr_0 [16] [16] ;
signed char arr_4 [16] ;
long long int arr_5 [16] ;
short arr_9 [23] [23] ;
unsigned char arr_10 [23] ;
_Bool arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 7460998131732900783ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-113 : (signed char)97;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = -8604266555263171382LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-16191;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
