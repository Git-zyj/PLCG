#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)122;
unsigned int var_1 = 1707462624U;
unsigned short var_3 = (unsigned short)29617;
unsigned long long int var_8 = 621979571746864856ULL;
int var_10 = 60586967;
int var_11 = 1463719969;
int zero = 0;
signed char var_13 = (signed char)107;
unsigned short var_14 = (unsigned short)488;
long long int var_15 = 662260237718706550LL;
unsigned char var_16 = (unsigned char)67;
unsigned int var_17 = 2885010689U;
unsigned long long int var_18 = 12069394551028264386ULL;
short var_19 = (short)1888;
short var_20 = (short)6494;
int var_21 = -1984614106;
unsigned char var_22 = (unsigned char)177;
int var_23 = 1609645365;
short var_24 = (short)168;
unsigned short var_25 = (unsigned short)40255;
unsigned int arr_0 [16] ;
_Bool arr_3 [25] [25] ;
unsigned int arr_4 [25] ;
unsigned short arr_5 [24] ;
int arr_6 [24] ;
long long int arr_15 [12] [12] [12] ;
unsigned int arr_2 [16] ;
unsigned short arr_7 [24] ;
unsigned short arr_8 [24] ;
unsigned long long int arr_20 [21] ;
long long int arr_21 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2293019565U : 2891374382U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 267524309U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)18518 : (unsigned short)45652;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = -1535541983;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = -8973397979726891101LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2129805882U : 2844638981U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)63725 : (unsigned short)41866;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)7440 : (unsigned short)3454;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_20 [i_0] = 788239397601120945ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_21 [i_0] = -6445552239867307139LL;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
