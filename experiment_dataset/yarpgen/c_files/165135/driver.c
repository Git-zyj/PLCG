#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30492;
unsigned char var_2 = (unsigned char)196;
int var_7 = 1842018791;
unsigned long long int var_12 = 8562254856069853492ULL;
signed char var_13 = (signed char)66;
int var_17 = -39753455;
signed char var_18 = (signed char)7;
int zero = 0;
signed char var_20 = (signed char)-90;
unsigned short var_21 = (unsigned short)25624;
int var_22 = 556827352;
unsigned char var_23 = (unsigned char)227;
unsigned long long int var_24 = 332376879986096355ULL;
long long int var_25 = -6201002768532649926LL;
signed char var_26 = (signed char)-31;
unsigned long long int var_27 = 1288104559386393963ULL;
unsigned long long int var_28 = 7438026461601006393ULL;
unsigned char var_29 = (unsigned char)36;
unsigned char var_30 = (unsigned char)112;
long long int var_31 = 4975585341995701147LL;
signed char var_32 = (signed char)12;
unsigned long long int var_33 = 6907332923868568462ULL;
unsigned char arr_2 [23] ;
unsigned long long int arr_3 [23] ;
unsigned char arr_4 [23] ;
long long int arr_5 [23] [23] [23] ;
int arr_6 [23] [23] ;
int arr_8 [23] [23] ;
long long int arr_10 [23] [23] ;
int arr_12 [23] [23] [23] ;
_Bool arr_15 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 3404381294919036506ULL : 11188227634083751813ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)17 : (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -7587056489538605230LL : 581440280669680040LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = -544279740;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = 553247631;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = -1863787498710028555LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 606020678;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
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
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
