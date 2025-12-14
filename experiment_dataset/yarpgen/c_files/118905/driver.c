#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)232;
unsigned short var_2 = (unsigned short)31560;
signed char var_3 = (signed char)-97;
int var_4 = -94692431;
int var_6 = -993020458;
int var_7 = -1334478421;
unsigned int var_8 = 4037693637U;
unsigned long long int var_10 = 7862333872584454037ULL;
signed char var_11 = (signed char)-105;
long long int var_12 = -8076713075979326437LL;
unsigned char var_13 = (unsigned char)209;
int zero = 0;
long long int var_14 = -5868828214258104960LL;
long long int var_15 = -3305971351598137052LL;
long long int var_16 = 8180710031985289517LL;
long long int var_17 = -6690353864410771725LL;
signed char var_18 = (signed char)16;
unsigned int var_19 = 3077352083U;
unsigned long long int var_20 = 1766248724740723236ULL;
_Bool var_21 = (_Bool)0;
int arr_13 [11] [11] ;
signed char arr_27 [11] [11] [11] [11] ;
signed char arr_28 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? -23293305 : -474315724;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)-78 : (signed char)-112;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_28 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)30 : (signed char)-101;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
