#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -61973511335430765LL;
unsigned char var_4 = (unsigned char)184;
short var_5 = (short)-11666;
signed char var_6 = (signed char)-127;
unsigned char var_8 = (unsigned char)88;
int zero = 0;
unsigned char var_10 = (unsigned char)223;
signed char var_11 = (signed char)43;
signed char var_12 = (signed char)110;
unsigned short var_13 = (unsigned short)33809;
unsigned char var_14 = (unsigned char)104;
short var_15 = (short)32136;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)55;
signed char arr_3 [18] [18] ;
unsigned long long int arr_9 [18] [18] ;
unsigned char arr_10 [18] [18] ;
unsigned short arr_14 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 17701959880938409918ULL : 1253479069684596762ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)22957 : (unsigned short)48277;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
