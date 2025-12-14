#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)201;
short var_5 = (short)-19247;
short var_7 = (short)-5252;
long long int var_8 = 4821154843517656550LL;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 2510689851U;
int zero = 0;
unsigned char var_11 = (unsigned char)157;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)93;
long long int var_14 = -6882037812099618869LL;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)52;
unsigned char var_17 = (unsigned char)103;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
unsigned long long int arr_0 [24] ;
short arr_1 [24] ;
unsigned short arr_3 [10] [10] ;
unsigned short arr_4 [10] [10] ;
long long int arr_11 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 4692955883997295697ULL : 17005380632571486935ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)30169 : (short)1047;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)5613;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)2240 : (unsigned short)26629;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -7975695210824265443LL : 1456799080060902646LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
