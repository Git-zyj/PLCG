#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 13797946211408338458ULL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 6959947488675862433ULL;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)104;
signed char var_8 = (signed char)61;
long long int var_9 = -420061633387919370LL;
int zero = 0;
long long int var_10 = -2288055561470947441LL;
unsigned char var_11 = (unsigned char)63;
unsigned short var_12 = (unsigned short)28816;
unsigned short var_13 = (unsigned short)60069;
unsigned short var_14 = (unsigned short)19437;
unsigned char var_15 = (unsigned char)122;
unsigned long long int var_16 = 10673685167963207506ULL;
unsigned short var_17 = (unsigned short)42083;
unsigned long long int var_18 = 13712268170642248325ULL;
unsigned long long int var_19 = 16468066023475993042ULL;
unsigned long long int var_20 = 8414397714050787073ULL;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
long long int var_23 = -4657399549055183210LL;
unsigned short var_24 = (unsigned short)23195;
unsigned long long int var_25 = 18289296491390666698ULL;
long long int arr_0 [20] [20] ;
int arr_1 [20] ;
unsigned long long int arr_2 [21] ;
signed char arr_5 [24] ;
unsigned char arr_6 [24] ;
unsigned char arr_7 [24] ;
unsigned char arr_12 [24] [24] [24] ;
unsigned long long int arr_13 [24] [24] [24] [24] ;
_Bool arr_14 [24] [24] [24] ;
long long int arr_19 [24] [24] [24] [24] [24] ;
unsigned short arr_21 [24] ;
_Bool arr_4 [21] ;
unsigned long long int arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = -6848400871180522055LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -2100284327;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 7856374892185241833ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (signed char)-51;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 5659773309682052197ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 3352938389865247287LL : 1839018800190025553LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_21 [i_0] = (unsigned short)14230;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1778190117817983640ULL : 10681082721580922831ULL;
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
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
