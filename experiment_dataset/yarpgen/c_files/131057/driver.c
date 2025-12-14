#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -834755273;
signed char var_4 = (signed char)122;
_Bool var_6 = (_Bool)0;
int var_9 = 1114206527;
int var_10 = -903915542;
unsigned char var_11 = (unsigned char)24;
int var_13 = 101647843;
int zero = 0;
signed char var_16 = (signed char)-122;
unsigned long long int var_17 = 298473886528996252ULL;
int var_18 = 1099776128;
unsigned short var_19 = (unsigned short)29558;
long long int var_20 = -559287298400830505LL;
unsigned char arr_1 [24] [24] ;
short arr_3 [24] [24] ;
unsigned char arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-13268;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)52 : (unsigned char)32;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
