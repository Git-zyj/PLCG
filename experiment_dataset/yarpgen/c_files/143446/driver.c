#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_2 = (unsigned short)1100;
unsigned short var_3 = (unsigned short)45845;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)137;
unsigned short var_6 = (unsigned short)7560;
unsigned int var_7 = 1175561981U;
signed char var_8 = (signed char)-122;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 2691845393U;
int zero = 0;
unsigned long long int var_12 = 6071792535145725839ULL;
unsigned char var_13 = (unsigned char)118;
unsigned int var_14 = 3817396222U;
unsigned char var_15 = (unsigned char)84;
short var_16 = (short)-5006;
signed char var_17 = (signed char)10;
_Bool var_18 = (_Bool)1;
long long int var_19 = -4605566328981038927LL;
unsigned short var_20 = (unsigned short)18784;
_Bool var_21 = (_Bool)0;
unsigned char arr_0 [11] [11] ;
signed char arr_1 [11] ;
unsigned int arr_4 [24] ;
unsigned int arr_6 [24] ;
unsigned char arr_2 [11] ;
unsigned int arr_7 [24] [24] ;
unsigned int arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)216;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)-95;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 1804717030U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 3080123382U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = 4067622643U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 833668553U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
