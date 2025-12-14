#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3127062678U;
long long int var_2 = -6501842510997438957LL;
_Bool var_3 = (_Bool)0;
long long int var_4 = -6543651044431727850LL;
signed char var_6 = (signed char)-58;
unsigned char var_8 = (unsigned char)227;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)84;
_Bool var_13 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = -293129757;
unsigned int var_16 = 2092133326U;
long long int var_17 = 1961007040560095253LL;
unsigned char var_18 = (unsigned char)100;
short var_19 = (short)-31620;
unsigned long long int arr_0 [19] ;
unsigned long long int arr_1 [19] ;
unsigned long long int arr_6 [13] [13] ;
unsigned short arr_7 [13] ;
int arr_15 [13] ;
unsigned long long int arr_16 [13] [13] ;
short arr_2 [19] [19] ;
unsigned char arr_3 [19] ;
short arr_8 [13] ;
unsigned short arr_9 [13] ;
signed char arr_14 [15] ;
unsigned int arr_17 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 9314455499519007318ULL : 3232872781552592079ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 12636861092122988666ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = 3391221879304797841ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (unsigned short)7922;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = 247678823;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_16 [i_0] [i_1] = 3858785323978048223ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-16143 : (short)-23984;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)1 : (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (short)26266;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (unsigned short)23549;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? (signed char)-24 : (signed char)-66;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = 2986065210U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
