#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16076767609235061579ULL;
unsigned short var_1 = (unsigned short)46843;
unsigned long long int var_3 = 1686516687694219559ULL;
long long int var_4 = 8160884655826855321LL;
int var_5 = 1480811986;
unsigned long long int var_6 = 11070256774351900879ULL;
unsigned short var_7 = (unsigned short)8678;
unsigned char var_8 = (unsigned char)158;
int zero = 0;
signed char var_10 = (signed char)-82;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)11127;
long long int var_13 = 3290127270162804449LL;
signed char var_14 = (signed char)-43;
short var_15 = (short)-15329;
_Bool var_16 = (_Bool)0;
long long int var_17 = -1117150778866728185LL;
unsigned long long int arr_0 [16] ;
long long int arr_1 [16] [16] ;
long long int arr_2 [16] ;
unsigned long long int arr_3 [16] ;
_Bool arr_5 [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 11126980950976806883ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = -8647863354437719893LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -6949534811295730010LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 13184750816471818244ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
