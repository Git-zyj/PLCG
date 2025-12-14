#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)33;
unsigned short var_2 = (unsigned short)50188;
unsigned short var_3 = (unsigned short)18600;
unsigned long long int var_4 = 12426687838877513147ULL;
unsigned long long int var_6 = 1631230620349930417ULL;
unsigned char var_7 = (unsigned char)5;
unsigned short var_10 = (unsigned short)25990;
unsigned short var_13 = (unsigned short)34489;
signed char var_16 = (signed char)-42;
int var_17 = 752137300;
int zero = 0;
unsigned int var_20 = 352821708U;
int var_21 = 354447024;
unsigned short var_22 = (unsigned short)25174;
unsigned long long int var_23 = 12374608805950986575ULL;
int var_24 = 1742973962;
unsigned int arr_10 [14] ;
unsigned long long int arr_11 [14] [14] ;
unsigned int arr_12 [14] [14] ;
int arr_6 [11] [11] [11] ;
unsigned char arr_13 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = 3948104284U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_11 [i_0] [i_1] = 3837606421257901344ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_12 [i_0] [i_1] = 3818705321U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -939604173 : -1598945166;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned char)138;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
