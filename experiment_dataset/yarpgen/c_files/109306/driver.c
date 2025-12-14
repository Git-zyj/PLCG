#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5972995384375321159ULL;
int var_1 = 1678084907;
unsigned short var_2 = (unsigned short)49230;
int var_4 = -1620609613;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)15;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)50967;
int zero = 0;
unsigned int var_10 = 2711173933U;
unsigned char var_11 = (unsigned char)229;
unsigned char var_12 = (unsigned char)47;
short var_13 = (short)21107;
unsigned int var_14 = 212790408U;
int var_15 = 831998093;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)55811;
unsigned char var_19 = (unsigned char)206;
unsigned short arr_0 [13] [13] ;
unsigned short arr_1 [13] ;
unsigned short arr_4 [23] ;
unsigned int arr_5 [23] ;
long long int arr_2 [13] [13] ;
unsigned short arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)11729;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)33694;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned short)49086;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 2690731900U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? -742762587397748543LL : -2949548584577514199LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)55344 : (unsigned short)63284;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
