#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)54281;
short var_4 = (short)3796;
short var_5 = (short)24120;
unsigned char var_7 = (unsigned char)199;
signed char var_10 = (signed char)-122;
int zero = 0;
signed char var_11 = (signed char)-77;
short var_12 = (short)-7012;
long long int var_13 = 489421916622610695LL;
unsigned long long int var_14 = 75527157762836603ULL;
unsigned long long int var_15 = 807425200671762861ULL;
signed char var_16 = (signed char)109;
_Bool arr_0 [11] ;
_Bool arr_1 [11] [11] ;
unsigned short arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)13027;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
