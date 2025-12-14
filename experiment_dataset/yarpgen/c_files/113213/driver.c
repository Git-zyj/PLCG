#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)668;
unsigned long long int var_2 = 15398629240443696246ULL;
signed char var_3 = (signed char)-7;
int var_4 = -265850010;
unsigned short var_5 = (unsigned short)44194;
short var_7 = (short)-12598;
unsigned short var_10 = (unsigned short)1516;
unsigned int var_11 = 2347736741U;
unsigned long long int var_12 = 5448144875954357911ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)14754;
unsigned short var_14 = (unsigned short)10381;
unsigned long long int var_15 = 10958769499597082708ULL;
unsigned short var_16 = (unsigned short)49822;
unsigned char var_17 = (unsigned char)167;
unsigned int arr_0 [25] [25] ;
short arr_1 [25] [25] ;
unsigned int arr_4 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 2150255905U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (short)9902;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 2249167944U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
