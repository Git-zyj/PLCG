#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3332494418U;
unsigned short var_3 = (unsigned short)28718;
short var_7 = (short)-26905;
unsigned int var_10 = 1082102994U;
unsigned short var_13 = (unsigned short)46217;
int zero = 0;
unsigned short var_14 = (unsigned short)9858;
unsigned short var_15 = (unsigned short)31558;
unsigned char var_16 = (unsigned char)16;
unsigned char var_17 = (unsigned char)252;
signed char var_18 = (signed char)-111;
unsigned int var_19 = 3384041966U;
unsigned int var_20 = 1611566876U;
unsigned int arr_0 [23] ;
long long int arr_1 [23] ;
long long int arr_2 [23] [23] ;
_Bool arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 3389813133U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -2521222197717131185LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 1798198719482873141LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
