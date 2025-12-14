#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2102149293U;
_Bool var_4 = (_Bool)0;
int var_6 = -304537534;
unsigned int var_8 = 3438776397U;
unsigned long long int var_10 = 13537677668781760036ULL;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)4;
signed char var_16 = (signed char)17;
unsigned short var_18 = (unsigned short)11038;
int zero = 0;
unsigned int var_20 = 1792263450U;
short var_21 = (short)-22411;
long long int var_22 = 8690485651250419758LL;
long long int var_23 = -4362481037493212171LL;
unsigned short var_24 = (unsigned short)35790;
_Bool var_25 = (_Bool)1;
unsigned long long int var_26 = 11440921786783817514ULL;
unsigned int arr_2 [11] ;
signed char arr_6 [22] [22] ;
short arr_7 [22] ;
_Bool arr_10 [19] ;
unsigned char arr_18 [20] [20] ;
short arr_4 [11] ;
unsigned long long int arr_5 [11] ;
long long int arr_8 [22] ;
unsigned long long int arr_9 [22] ;
_Bool arr_13 [19] ;
long long int arr_14 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 460574088U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)26;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (short)-19689;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)51 : (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)30096 : (short)31030;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 14255912888714877944ULL : 11843026863129940015ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = 7986734377732628428LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = 12359500888425939338ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_14 [i_0] [i_1] = -339407739935780746LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
