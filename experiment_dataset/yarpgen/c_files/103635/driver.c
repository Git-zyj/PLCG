#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-9499;
_Bool var_5 = (_Bool)1;
short var_6 = (short)16911;
int var_7 = 197529679;
unsigned char var_10 = (unsigned char)40;
unsigned short var_12 = (unsigned short)50207;
unsigned long long int var_13 = 7234689816510298339ULL;
unsigned int var_15 = 4261861466U;
int zero = 0;
long long int var_16 = 7921146328083296870LL;
unsigned short var_17 = (unsigned short)59397;
unsigned int var_18 = 444846973U;
unsigned short var_19 = (unsigned short)7440;
long long int var_20 = 3526053288231033828LL;
unsigned short var_21 = (unsigned short)61144;
unsigned short arr_0 [12] ;
unsigned short arr_1 [12] ;
long long int arr_2 [12] ;
long long int arr_10 [12] ;
short arr_7 [12] ;
unsigned short arr_13 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned short)6728;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)12678;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 1972242589981583776LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = -7052603657027277237LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (short)461;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (unsigned short)50833 : (unsigned short)48223;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
