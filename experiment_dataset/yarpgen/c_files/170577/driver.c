#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8109078251993159668LL;
unsigned int var_1 = 4037927428U;
short var_2 = (short)-1358;
unsigned short var_3 = (unsigned short)30120;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)13828;
unsigned char var_7 = (unsigned char)228;
long long int var_8 = 1216406027546150420LL;
unsigned short var_10 = (unsigned short)45376;
long long int var_12 = -3774733608856685127LL;
signed char var_14 = (signed char)-73;
int zero = 0;
short var_15 = (short)-24985;
unsigned char var_16 = (unsigned char)6;
long long int var_17 = 1061438926865049732LL;
unsigned int var_18 = 919928523U;
unsigned int var_19 = 2720395197U;
unsigned short var_20 = (unsigned short)2581;
short arr_0 [25] ;
unsigned long long int arr_1 [25] ;
unsigned short arr_4 [25] [25] ;
signed char arr_8 [25] [25] [25] ;
int arr_9 [25] [25] ;
unsigned long long int arr_2 [25] ;
_Bool arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)-5311;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 2516149544315693141ULL : 10540489941347347454ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)26770 : (unsigned short)14057;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-47 : (signed char)-101;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 759940263 : -445615292;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 6237157975744446955ULL : 13697671598723637368ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
