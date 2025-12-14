#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-30578;
unsigned char var_4 = (unsigned char)69;
int var_7 = -1452113900;
unsigned char var_9 = (unsigned char)230;
int zero = 0;
int var_10 = 388128699;
int var_11 = -834598464;
unsigned long long int var_12 = 7387838957117084497ULL;
unsigned short var_13 = (unsigned short)39390;
short var_14 = (short)5997;
signed char var_15 = (signed char)12;
int var_16 = -2134589102;
unsigned char var_17 = (unsigned char)33;
unsigned long long int var_18 = 4245435289573997599ULL;
unsigned char var_19 = (unsigned char)234;
_Bool arr_1 [14] ;
long long int arr_7 [13] ;
short arr_11 [15] [15] ;
unsigned char arr_12 [15] ;
short arr_15 [15] ;
unsigned char arr_2 [14] ;
int arr_13 [15] ;
int arr_14 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 1672151690445183402LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = (short)9174;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (unsigned char)17;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = (short)12065;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)64 : (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = 570578070;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = 163063282;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
