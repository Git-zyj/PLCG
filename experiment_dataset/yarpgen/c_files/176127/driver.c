#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3799650341U;
unsigned int var_2 = 2608795419U;
unsigned char var_4 = (unsigned char)130;
unsigned int var_5 = 3077347628U;
unsigned int var_6 = 3462434713U;
unsigned int var_8 = 3333653827U;
unsigned short var_9 = (unsigned short)5475;
unsigned char var_10 = (unsigned char)49;
unsigned char var_13 = (unsigned char)230;
unsigned int var_14 = 3994802672U;
int zero = 0;
unsigned short var_16 = (unsigned short)34038;
unsigned char var_17 = (unsigned char)39;
unsigned short var_18 = (unsigned short)46283;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 3683687560U;
unsigned char arr_1 [17] [17] ;
unsigned int arr_2 [17] ;
unsigned int arr_7 [21] [21] ;
unsigned int arr_8 [21] ;
unsigned short arr_10 [21] [21] ;
unsigned int arr_11 [21] ;
unsigned char arr_4 [17] ;
unsigned int arr_5 [17] [17] ;
unsigned char arr_12 [21] ;
unsigned int arr_13 [21] [21] ;
_Bool arr_14 [21] ;
unsigned short arr_15 [21] ;
unsigned char arr_16 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 426012181U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = 4228699205U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = 1037634171U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)706;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = 3094389129U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned char)80;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 2372732250U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = 2970017422U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (unsigned short)7594;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)71;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
