#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16381684653425426407ULL;
unsigned char var_3 = (unsigned char)246;
int var_4 = 1555660645;
unsigned long long int var_5 = 6021307211681906326ULL;
unsigned int var_6 = 3310595821U;
long long int var_8 = -5932248810891273375LL;
int var_11 = 1177377772;
int var_12 = -503008140;
int zero = 0;
unsigned int var_13 = 1599980606U;
unsigned long long int var_14 = 13928721652680267465ULL;
int var_15 = -864359545;
int var_16 = -2027442001;
unsigned long long int var_17 = 732784123961964544ULL;
unsigned int var_18 = 2916503798U;
unsigned long long int var_19 = 1508891115199582377ULL;
unsigned char var_20 = (unsigned char)178;
unsigned char var_21 = (unsigned char)51;
unsigned int var_22 = 2772646389U;
short var_23 = (short)-7020;
int var_24 = 119500656;
_Bool arr_0 [13] ;
int arr_1 [13] ;
int arr_2 [15] ;
int arr_4 [15] ;
unsigned char arr_5 [15] ;
unsigned long long int arr_14 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 642109575;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -1504409404;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -620972322 : 1607209124;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)1 : (unsigned char)68;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = 11886937945356127099ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
