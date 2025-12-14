#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1479483478U;
int var_2 = -1707023112;
unsigned short var_3 = (unsigned short)10041;
short var_5 = (short)32192;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 3360103241U;
unsigned long long int var_8 = 3793757602791528478ULL;
unsigned char var_9 = (unsigned char)5;
int zero = 0;
signed char var_10 = (signed char)88;
unsigned long long int var_11 = 1622716338224838514ULL;
unsigned char var_12 = (unsigned char)170;
unsigned long long int var_13 = 4426112672944035993ULL;
unsigned long long int var_14 = 15606360632372776962ULL;
unsigned short var_15 = (unsigned short)34778;
unsigned short var_16 = (unsigned short)37339;
signed char var_17 = (signed char)118;
short arr_1 [23] [23] ;
unsigned long long int arr_5 [23] ;
int arr_3 [23] [23] ;
_Bool arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (short)13478;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 1269958582858388801ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 319224505;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
