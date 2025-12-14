#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9976773842268295397ULL;
unsigned int var_1 = 3749774144U;
unsigned short var_5 = (unsigned short)20982;
short var_6 = (short)-27605;
int zero = 0;
unsigned short var_10 = (unsigned short)39830;
short var_11 = (short)-9758;
unsigned int var_12 = 2700002213U;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)28579;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)166;
short arr_3 [12] ;
short arr_4 [12] [12] [12] ;
_Bool arr_5 [12] ;
unsigned char arr_6 [12] ;
unsigned int arr_8 [12] [12] [12] ;
short arr_13 [12] [12] [12] [12] ;
_Bool arr_17 [16] ;
unsigned int arr_19 [16] [16] ;
signed char arr_7 [12] ;
short arr_16 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (short)-28247;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-4806;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 1881235904U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (short)-20400;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_19 [i_0] [i_1] = 3091693544U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_16 [i_0] = (short)-26448;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
