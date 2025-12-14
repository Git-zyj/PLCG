#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8951;
short var_1 = (short)-23117;
unsigned char var_2 = (unsigned char)221;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)43458;
unsigned long long int var_5 = 11568901509399146309ULL;
unsigned char var_6 = (unsigned char)165;
unsigned char var_9 = (unsigned char)219;
unsigned int var_10 = 59151597U;
int var_11 = -1354219971;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 138299845U;
unsigned long long int var_15 = 1485699252989005392ULL;
int var_16 = -1488876757;
short var_17 = (short)79;
int var_18 = 1349927232;
unsigned long long int var_19 = 13149589711899414035ULL;
unsigned char var_20 = (unsigned char)57;
unsigned short var_21 = (unsigned short)17505;
unsigned short var_22 = (unsigned short)60093;
_Bool arr_0 [16] ;
unsigned long long int arr_1 [16] ;
unsigned long long int arr_2 [16] ;
unsigned int arr_3 [16] [16] ;
unsigned int arr_5 [16] [16] [16] ;
unsigned char arr_6 [16] ;
int arr_11 [11] ;
_Bool arr_15 [22] ;
unsigned char arr_16 [22] ;
short arr_17 [22] ;
long long int arr_8 [16] [16] ;
short arr_9 [16] [16] [16] ;
unsigned int arr_10 [16] ;
long long int arr_18 [22] ;
unsigned int arr_19 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 7852322481970509262ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 5028630832280553435ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 1255538282U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3842278211U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = -1136362827;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = (short)24724;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = -6109811328857313822LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)29715;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = 3713500689U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = -8955955405599640815LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_19 [i_0] [i_1] = 3877801223U;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
