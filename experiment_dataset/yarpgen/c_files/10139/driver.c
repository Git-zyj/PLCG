#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)65223;
unsigned short var_4 = (unsigned short)14642;
unsigned short var_5 = (unsigned short)44389;
unsigned short var_6 = (unsigned short)36094;
int var_9 = 451215461;
int var_11 = -1895372190;
int zero = 0;
unsigned short var_14 = (unsigned short)27012;
unsigned short var_15 = (unsigned short)36978;
int var_16 = -1012848125;
int var_17 = 570023534;
int var_18 = -394704335;
unsigned short arr_0 [16] ;
int arr_1 [16] [16] ;
int arr_3 [21] ;
unsigned short arr_4 [21] ;
unsigned short arr_5 [21] ;
int arr_2 [16] ;
int arr_6 [21] [21] ;
int arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)37083;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 1677216182;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -1188816024;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)59220 : (unsigned short)14995;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (unsigned short)12008;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -2012274178;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? -1073368764 : 374518956;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 903072102 : -339090022;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
