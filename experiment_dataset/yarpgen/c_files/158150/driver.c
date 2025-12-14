#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-12;
_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)181;
unsigned int var_6 = 3180471205U;
long long int var_10 = -2273702328348891717LL;
short var_12 = (short)28914;
long long int var_15 = 743039619208768072LL;
long long int var_16 = 6136037855980078007LL;
unsigned int var_17 = 2068281693U;
int zero = 0;
unsigned short var_20 = (unsigned short)51949;
unsigned long long int var_21 = 17892812452674269942ULL;
short var_22 = (short)-8711;
unsigned int var_23 = 1978357621U;
unsigned char arr_0 [16] ;
long long int arr_1 [16] ;
signed char arr_2 [16] [16] ;
int arr_4 [16] ;
unsigned short arr_5 [16] ;
_Bool arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)109;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 3230031275219800044LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)5;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 772275064;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (unsigned short)13088;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
