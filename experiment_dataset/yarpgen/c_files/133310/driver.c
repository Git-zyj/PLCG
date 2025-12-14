#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46988;
unsigned int var_1 = 3216399337U;
short var_2 = (short)-26403;
unsigned short var_5 = (unsigned short)42324;
unsigned short var_6 = (unsigned short)7902;
unsigned int var_7 = 3694638215U;
unsigned char var_8 = (unsigned char)198;
unsigned int var_10 = 1909601465U;
unsigned short var_12 = (unsigned short)49645;
unsigned int var_14 = 46843737U;
unsigned short var_16 = (unsigned short)48365;
long long int var_17 = 6706525705848874818LL;
unsigned int var_18 = 2710250286U;
int zero = 0;
unsigned short var_20 = (unsigned short)31052;
short var_21 = (short)-7081;
unsigned char var_22 = (unsigned char)8;
short var_23 = (short)-828;
unsigned short var_24 = (unsigned short)58390;
short var_25 = (short)-24040;
long long int arr_1 [18] [18] ;
signed char arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 1982197225099776258LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (signed char)-13;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
