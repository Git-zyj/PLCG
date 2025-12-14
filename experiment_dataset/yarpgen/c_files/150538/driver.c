#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2031;
unsigned long long int var_2 = 2798923468932649004ULL;
unsigned char var_3 = (unsigned char)85;
unsigned short var_4 = (unsigned short)47969;
unsigned short var_5 = (unsigned short)29908;
int var_7 = 1531547065;
unsigned long long int var_8 = 14823174577473258705ULL;
unsigned int var_10 = 1689264626U;
int zero = 0;
int var_13 = 1339417750;
int var_14 = 1666311660;
long long int var_15 = -2645211424987752182LL;
unsigned short var_16 = (unsigned short)23961;
signed char var_17 = (signed char)-53;
int var_18 = 962657473;
_Bool arr_0 [20] ;
_Bool arr_1 [20] [20] ;
unsigned int arr_2 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 4063612311U : 3405024223U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
