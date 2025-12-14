#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1059664877U;
signed char var_1 = (signed char)-53;
signed char var_3 = (signed char)-99;
signed char var_6 = (signed char)-30;
int var_7 = -839956205;
signed char var_8 = (signed char)-42;
unsigned long long int var_9 = 17802565788075293508ULL;
signed char var_11 = (signed char)-54;
unsigned char var_12 = (unsigned char)144;
int zero = 0;
signed char var_14 = (signed char)88;
signed char var_15 = (signed char)62;
signed char var_16 = (signed char)48;
unsigned long long int var_17 = 9011955972506199005ULL;
signed char arr_0 [25] ;
signed char arr_1 [25] ;
unsigned long long int arr_2 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (signed char)61;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 18392648513319764698ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
