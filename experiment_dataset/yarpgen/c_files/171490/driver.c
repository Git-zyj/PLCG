#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)6827;
short var_5 = (short)-19503;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-89;
signed char var_9 = (signed char)-116;
unsigned short var_11 = (unsigned short)55648;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-29;
int zero = 0;
unsigned long long int var_20 = 13830063249613219285ULL;
signed char var_21 = (signed char)14;
unsigned char var_22 = (unsigned char)167;
unsigned long long int var_23 = 6071223412429211998ULL;
unsigned short var_24 = (unsigned short)8718;
signed char var_25 = (signed char)-15;
_Bool var_26 = (_Bool)1;
unsigned long long int arr_0 [16] [16] ;
_Bool arr_3 [16] [16] [16] ;
short arr_4 [16] ;
unsigned long long int arr_5 [16] [16] [16] ;
unsigned char arr_13 [22] ;
unsigned long long int arr_9 [11] [11] ;
int arr_14 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 8296970962448149713ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (short)-29857;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 11414514694598839988ULL : 9735252234552811808ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 4885780035540894476ULL : 1447791976013363951ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_14 [i_0] [i_1] = 723932124;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
