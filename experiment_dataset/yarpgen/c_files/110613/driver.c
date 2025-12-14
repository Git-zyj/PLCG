#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)15;
int var_1 = -1643053569;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-93;
unsigned char var_10 = (unsigned char)206;
unsigned long long int var_11 = 18394887629275777898ULL;
short var_12 = (short)13142;
int zero = 0;
int var_14 = -1203441916;
unsigned int var_15 = 2520042558U;
int var_16 = 56541100;
unsigned int var_17 = 2979626954U;
signed char var_18 = (signed char)-97;
unsigned int var_19 = 1692840582U;
short var_20 = (short)28013;
int var_21 = -1588352547;
unsigned short var_22 = (unsigned short)18541;
int var_23 = -1621892142;
unsigned char var_24 = (unsigned char)98;
unsigned char var_25 = (unsigned char)199;
_Bool var_26 = (_Bool)1;
_Bool arr_0 [21] ;
signed char arr_1 [21] [21] ;
int arr_7 [22] [22] ;
short arr_10 [15] ;
long long int arr_12 [15] [15] [15] ;
unsigned long long int arr_18 [15] [15] [15] [15] [15] ;
_Bool arr_26 [15] ;
int arr_29 [24] ;
unsigned short arr_30 [24] ;
unsigned short arr_2 [21] ;
short arr_3 [21] ;
int arr_4 [21] [21] ;
unsigned short arr_28 [15] [15] [15] [15] [15] ;
unsigned short arr_31 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = -2048788310;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (short)-9653;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = -3081501413511223651LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = 9582662435042943936ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_26 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_29 [i_0] = 88878971;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_30 [i_0] = (unsigned short)55169;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)22558;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (short)12350;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = -440906731;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (unsigned short)7354 : (unsigned short)30285;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_31 [i_0] = (unsigned short)21958;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_31 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
