#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 3287916234012756060ULL;
signed char var_7 = (signed char)-11;
unsigned long long int var_8 = 6081188013899354856ULL;
int var_11 = 711432056;
unsigned long long int var_12 = 3760135887431413253ULL;
signed char var_13 = (signed char)16;
int zero = 0;
unsigned long long int var_14 = 12774891877975489166ULL;
unsigned long long int var_15 = 5037476215203767171ULL;
int var_16 = -1367974050;
unsigned int var_17 = 2077403642U;
short var_18 = (short)-22012;
signed char arr_2 [11] [11] ;
short arr_5 [11] ;
int arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)45;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (short)-10931;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = -709557793;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
