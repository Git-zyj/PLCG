#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11385;
unsigned short var_1 = (unsigned short)16837;
_Bool var_5 = (_Bool)0;
long long int var_6 = 4757190746368056587LL;
int var_7 = -2084471030;
_Bool var_8 = (_Bool)0;
int var_9 = 1803475784;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)8231;
int zero = 0;
unsigned int var_13 = 562073993U;
unsigned long long int var_14 = 2456184761840737890ULL;
short var_15 = (short)-7902;
unsigned char var_16 = (unsigned char)92;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)29258;
unsigned char var_19 = (unsigned char)15;
unsigned char var_20 = (unsigned char)231;
signed char var_21 = (signed char)30;
unsigned int var_22 = 400657243U;
unsigned char var_23 = (unsigned char)123;
_Bool var_24 = (_Bool)0;
unsigned long long int var_25 = 3574534254542741266ULL;
long long int var_26 = -1010408792788741258LL;
long long int arr_0 [14] ;
long long int arr_1 [14] ;
unsigned int arr_2 [14] ;
int arr_3 [23] ;
long long int arr_4 [23] ;
long long int arr_5 [23] ;
long long int arr_6 [23] ;
unsigned short arr_7 [23] ;
unsigned short arr_8 [23] ;
int arr_10 [24] ;
unsigned int arr_11 [24] [24] ;
int arr_12 [21] ;
int arr_14 [21] ;
short arr_9 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 2798320258841904750LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 2361778553855749038LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 4055080706U : 1098468047U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = -1555495460;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 3625808746329795396LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 582350797448113425LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 5629279580556209168LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (unsigned short)56729;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (unsigned short)35056;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = 924257153;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = 782908844U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = 530024019;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = 1833476861;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)17392 : (short)-32297;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
