#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7614938345498731751ULL;
unsigned char var_1 = (unsigned char)4;
unsigned long long int var_2 = 6253458011299934996ULL;
unsigned char var_3 = (unsigned char)70;
signed char var_4 = (signed char)3;
signed char var_5 = (signed char)102;
short var_6 = (short)5979;
unsigned long long int var_10 = 9897406434454389737ULL;
unsigned char var_12 = (unsigned char)136;
int zero = 0;
unsigned int var_13 = 581999386U;
unsigned short var_14 = (unsigned short)21949;
int arr_0 [19] ;
unsigned long long int arr_4 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = -823910576;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 17542464379369725463ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
