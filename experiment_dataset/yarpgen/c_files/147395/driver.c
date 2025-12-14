#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-71;
_Bool var_1 = (_Bool)0;
short var_2 = (short)-14467;
unsigned long long int var_3 = 18332486284451492370ULL;
unsigned short var_5 = (unsigned short)21028;
int var_6 = -1151273973;
int var_7 = -1837636211;
long long int var_9 = -109554393561838883LL;
unsigned long long int var_10 = 6026657908361885105ULL;
int var_11 = -1744157815;
int var_12 = -46955200;
short var_13 = (short)-5666;
unsigned short var_14 = (unsigned short)3731;
unsigned int var_16 = 1069191843U;
long long int var_17 = -86686136463365527LL;
long long int var_18 = 2112494479162813175LL;
int zero = 0;
signed char var_19 = (signed char)-127;
unsigned int var_20 = 2039722665U;
signed char var_21 = (signed char)120;
unsigned long long int var_22 = 10736449774736922242ULL;
int var_23 = -1073691600;
unsigned short var_24 = (unsigned short)53510;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)-95;
int var_27 = 534321740;
int var_28 = 1693461267;
unsigned int var_29 = 1716175424U;
signed char var_30 = (signed char)5;
int arr_0 [18] ;
unsigned short arr_1 [18] ;
short arr_4 [18] ;
unsigned long long int arr_6 [18] [18] ;
short arr_8 [18] [18] ;
int arr_14 [18] ;
unsigned int arr_21 [18] [18] [18] ;
int arr_24 [18] ;
int arr_2 [18] ;
int arr_5 [18] ;
signed char arr_10 [18] ;
long long int arr_13 [18] ;
_Bool arr_18 [18] ;
unsigned short arr_19 [18] [18] [18] ;
unsigned short arr_22 [18] [18] ;
short arr_23 [18] ;
unsigned short arr_26 [18] ;
unsigned int arr_27 [18] [18] ;
unsigned short arr_30 [18] [18] ;
_Bool arr_31 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -1458361252;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)965;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (short)-7771;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = 15293417508945331450ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (short)7345;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = -981930080;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 2791270444U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? 1004712779 : -2112302503;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = -794097721;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = -953792711;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (signed char)70;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = -9070213538992776168LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned short)45387;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_22 [i_0] [i_1] = (unsigned short)60477;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_23 [i_0] = (short)-4961;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? (unsigned short)43671 : (unsigned short)36869;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_27 [i_0] [i_1] = (i_0 % 2 == 0) ? 1648055976U : 2443493738U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_30 [i_0] [i_1] = (unsigned short)50904;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_31 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
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
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_19 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
