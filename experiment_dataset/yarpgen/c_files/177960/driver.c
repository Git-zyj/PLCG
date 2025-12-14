#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)152;
int var_1 = -1224990777;
short var_2 = (short)-30516;
short var_3 = (short)-9397;
short var_4 = (short)-8747;
long long int var_5 = 5041127710949250238LL;
int var_6 = -1155076701;
unsigned char var_7 = (unsigned char)73;
short var_8 = (short)11424;
unsigned char var_10 = (unsigned char)72;
int zero = 0;
unsigned int var_11 = 197056472U;
short var_12 = (short)23379;
unsigned char var_13 = (unsigned char)72;
short var_14 = (short)-4534;
short var_15 = (short)745;
long long int arr_1 [19] [19] ;
unsigned int arr_2 [19] ;
unsigned long long int arr_4 [19] [19] ;
long long int arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = -7806760529379415648LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 1443066444U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 5269838378642097820ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = -6675235228563092859LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
