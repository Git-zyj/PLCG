#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48845;
unsigned short var_2 = (unsigned short)696;
long long int var_3 = 5054431110566562905LL;
unsigned int var_5 = 4267356328U;
unsigned char var_6 = (unsigned char)33;
unsigned char var_7 = (unsigned char)223;
unsigned short var_10 = (unsigned short)50529;
short var_11 = (short)18892;
long long int var_12 = -7557432089864774415LL;
int var_14 = 1762887395;
unsigned long long int var_16 = 18002803968226410130ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)21;
signed char var_20 = (signed char)85;
unsigned short var_21 = (unsigned short)14960;
long long int var_22 = -1557101198036354657LL;
unsigned long long int var_23 = 10352898120516218984ULL;
int var_24 = 907688074;
signed char arr_0 [23] [23] ;
short arr_1 [23] [23] ;
signed char arr_7 [11] ;
unsigned int arr_8 [11] ;
unsigned short arr_13 [11] [11] [11] [11] [11] ;
unsigned short arr_2 [23] ;
unsigned short arr_3 [23] ;
long long int arr_4 [23] ;
unsigned short arr_15 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-106 : (signed char)-110;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)6399 : (short)18592;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)39 : (signed char)-15;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 2120969350U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (unsigned short)17788 : (unsigned short)46064;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)28051 : (unsigned short)44492;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)1355 : (unsigned short)46375;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 7629049282100531712LL : 6849501886844600074LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)20666 : (unsigned short)58424;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
