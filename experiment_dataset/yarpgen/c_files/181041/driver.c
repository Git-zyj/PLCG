#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)32548;
long long int var_4 = -6335935867221562934LL;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)46787;
unsigned char var_10 = (unsigned char)5;
unsigned int var_11 = 994623517U;
unsigned char var_14 = (unsigned char)200;
int zero = 0;
signed char var_15 = (signed char)-69;
unsigned int var_16 = 1182628821U;
short var_17 = (short)-20391;
unsigned int var_18 = 1656947458U;
_Bool arr_4 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
