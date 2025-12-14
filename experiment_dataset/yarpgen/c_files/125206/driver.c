#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)21243;
unsigned long long int var_6 = 6338016410901515813ULL;
int var_7 = 1050259913;
long long int var_9 = 300306208762815621LL;
long long int var_10 = 7574052719283806686LL;
unsigned short var_13 = (unsigned short)38518;
int zero = 0;
short var_17 = (short)29174;
long long int var_18 = 425130188897852670LL;
unsigned int var_19 = 1715421819U;
unsigned long long int var_20 = 14155660467183072451ULL;
unsigned short var_21 = (unsigned short)45981;
short var_22 = (short)-24288;
short var_23 = (short)-30482;
unsigned short var_24 = (unsigned short)47557;
unsigned char arr_0 [20] ;
unsigned char arr_5 [25] ;
long long int arr_6 [25] ;
unsigned char arr_7 [25] ;
int arr_4 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)19 : (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned char)97;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = -3223004432844115118LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 1522831671 : -1619115221;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
