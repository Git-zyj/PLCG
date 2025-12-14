#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17535734782376495602ULL;
unsigned int var_2 = 2380842400U;
int var_5 = 900448149;
unsigned short var_11 = (unsigned short)13604;
unsigned short var_12 = (unsigned short)43065;
_Bool var_14 = (_Bool)1;
int var_17 = 338073751;
int zero = 0;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)236;
unsigned int var_21 = 4219684219U;
long long int var_22 = -4889013570992147867LL;
unsigned char arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)52 : (unsigned char)173;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
