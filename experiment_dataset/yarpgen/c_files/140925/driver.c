#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)58315;
_Bool var_1 = (_Bool)1;
int var_2 = -262681003;
long long int var_3 = -4035745772488972899LL;
short var_6 = (short)22469;
unsigned short var_7 = (unsigned short)28772;
signed char var_9 = (signed char)29;
unsigned char var_12 = (unsigned char)247;
int var_13 = 1562708785;
int zero = 0;
unsigned int var_15 = 1314966389U;
signed char var_16 = (signed char)95;
unsigned char var_17 = (unsigned char)169;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-3171;
long long int var_20 = 3057786020804867257LL;
unsigned char var_21 = (unsigned char)136;
_Bool var_22 = (_Bool)1;
unsigned long long int arr_0 [23] [23] ;
short arr_1 [23] [23] ;
_Bool arr_2 [23] ;
signed char arr_5 [23] [23] [23] ;
long long int arr_6 [23] ;
signed char arr_7 [23] [23] ;
signed char arr_9 [23] ;
long long int arr_3 [23] ;
signed char arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 1937149007640205855ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (short)19636;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)119 : (signed char)-61;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = -1815143029488833325LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)48 : (signed char)13;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (signed char)8;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 4354646298608110789LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (signed char)-84;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
