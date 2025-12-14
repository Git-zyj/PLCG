#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4007316243U;
long long int var_1 = -3644485954585385659LL;
unsigned int var_2 = 1721207186U;
int var_4 = 1061118585;
unsigned char var_5 = (unsigned char)241;
unsigned short var_6 = (unsigned short)61974;
unsigned int var_7 = 541689817U;
unsigned char var_8 = (unsigned char)2;
unsigned char var_9 = (unsigned char)249;
unsigned int var_10 = 875729971U;
unsigned char var_11 = (unsigned char)231;
int var_13 = -737949092;
int zero = 0;
unsigned short var_14 = (unsigned short)64796;
short var_15 = (short)-30877;
unsigned int var_16 = 1604775973U;
unsigned char var_17 = (unsigned char)43;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)24;
unsigned int var_20 = 4085666210U;
unsigned int var_21 = 2640452544U;
_Bool var_22 = (_Bool)0;
unsigned int arr_1 [15] ;
_Bool arr_2 [15] ;
_Bool arr_3 [15] ;
unsigned short arr_9 [15] ;
unsigned char arr_6 [15] [15] ;
_Bool arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 2642519346U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (unsigned short)52144;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)94;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
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
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
