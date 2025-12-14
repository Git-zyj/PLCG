#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 15128125391710137533ULL;
int var_6 = 1996737248;
short var_7 = (short)-19300;
unsigned short var_8 = (unsigned short)25088;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)59974;
short var_14 = (short)-21283;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-22476;
unsigned long long int var_17 = 10337105291325285340ULL;
unsigned short var_18 = (unsigned short)21748;
unsigned short var_19 = (unsigned short)33657;
short var_20 = (short)-23220;
unsigned int var_21 = 935574549U;
short var_22 = (short)-19120;
long long int var_23 = -4892900689867098898LL;
int var_24 = 989211871;
unsigned int var_25 = 3378671307U;
short var_26 = (short)-19699;
unsigned short var_27 = (unsigned short)48848;
unsigned char var_28 = (unsigned char)51;
_Bool var_29 = (_Bool)0;
signed char arr_1 [21] ;
unsigned int arr_2 [21] [21] ;
unsigned int arr_7 [21] ;
signed char arr_12 [21] [21] ;
unsigned long long int arr_17 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 123364547U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 3463862384U : 4161974269U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)46 : (signed char)98;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = 12191662391621648813ULL;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
