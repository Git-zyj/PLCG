#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7492802455326226674LL;
unsigned long long int var_1 = 7408120311069629679ULL;
unsigned short var_2 = (unsigned short)7971;
signed char var_3 = (signed char)-20;
unsigned int var_4 = 4100113912U;
short var_5 = (short)31355;
short var_6 = (short)11150;
unsigned long long int var_9 = 13017453236256259059ULL;
signed char var_11 = (signed char)-122;
unsigned short var_12 = (unsigned short)63005;
long long int var_13 = 7866933963732634246LL;
int zero = 0;
long long int var_15 = -1776601102006636810LL;
short var_16 = (short)-22618;
signed char var_17 = (signed char)-101;
long long int var_18 = 1625418332103613541LL;
short var_19 = (short)9992;
unsigned long long int var_20 = 776564592023246752ULL;
short var_21 = (short)-27508;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-283;
unsigned long long int var_24 = 12668544331102188730ULL;
_Bool var_25 = (_Bool)0;
unsigned char var_26 = (unsigned char)70;
long long int var_27 = -8089513432743487270LL;
long long int var_28 = 5581622829246021817LL;
long long int var_29 = 3302426104147853882LL;
long long int arr_1 [13] [13] ;
unsigned short arr_6 [13] [13] [13] [13] ;
unsigned char arr_10 [23] ;
unsigned short arr_11 [23] ;
unsigned short arr_12 [23] [23] ;
long long int arr_13 [23] [23] ;
long long int arr_14 [23] [23] [23] [23] ;
long long int arr_15 [23] ;
unsigned short arr_18 [23] [23] [23] [23] [23] ;
unsigned int arr_19 [23] [23] [23] ;
unsigned int arr_20 [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = 6414424825333634274LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned short)15027;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (unsigned short)19009;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)64929;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_13 [i_0] [i_1] = 4444186941187320008LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = -3670109966887615487LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = -707037150902415537LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)43227;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 1026960360U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = 1867260594U;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
