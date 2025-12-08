#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16735;
unsigned long long int var_1 = 10930736021370682722ULL;
unsigned char var_2 = (unsigned char)62;
unsigned int var_6 = 315706838U;
int var_7 = 1148678993;
unsigned int var_8 = 3906905297U;
unsigned short var_9 = (unsigned short)41213;
unsigned long long int var_10 = 5371589746687899559ULL;
unsigned short var_11 = (unsigned short)7742;
signed char var_12 = (signed char)87;
unsigned int var_14 = 4050207188U;
int zero = 0;
unsigned int var_16 = 2453184018U;
unsigned long long int var_17 = 10712032977557629108ULL;
unsigned short var_18 = (unsigned short)40298;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2901532858U;
unsigned short var_21 = (unsigned short)60462;
unsigned long long int var_22 = 9903836665548522492ULL;
unsigned short var_23 = (unsigned short)56237;
short var_24 = (short)14448;
unsigned long long int var_25 = 4634982531944334144ULL;
unsigned int var_26 = 4069919111U;
_Bool var_27 = (_Bool)1;
signed char arr_0 [23] ;
int arr_1 [23] [23] ;
unsigned char arr_2 [23] ;
int arr_4 [23] [23] ;
unsigned long long int arr_6 [23] ;
unsigned long long int arr_8 [23] [23] ;
unsigned int arr_9 [23] [23] [23] ;
short arr_18 [23] [23] [23] [23] ;
unsigned char arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)94;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 454031306;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)113;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 1206175041;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 9722307731672503022ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = 3863321431996341733ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 2327565544U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (short)-31705;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned char)217;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
