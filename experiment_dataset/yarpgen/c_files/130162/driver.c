#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14659375193461743374ULL;
signed char var_1 = (signed char)-122;
unsigned char var_2 = (unsigned char)189;
short var_3 = (short)17805;
unsigned char var_4 = (unsigned char)173;
int var_5 = 2025596027;
unsigned long long int var_8 = 12078592291807019839ULL;
unsigned short var_12 = (unsigned short)34744;
int var_14 = 1298719264;
int zero = 0;
unsigned short var_16 = (unsigned short)2514;
unsigned int var_17 = 1179552717U;
short var_18 = (short)-11913;
long long int var_19 = -7809094679738435338LL;
short var_20 = (short)-26478;
unsigned long long int arr_0 [12] ;
signed char arr_5 [12] [12] ;
unsigned int arr_6 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 14064813846893361411ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)115;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 3662872798U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
