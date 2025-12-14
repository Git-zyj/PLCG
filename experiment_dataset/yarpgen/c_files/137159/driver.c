#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34050;
long long int var_2 = -6529122236134087023LL;
short var_7 = (short)-32311;
int var_9 = -1141346646;
unsigned long long int var_13 = 12939162398203732057ULL;
long long int var_14 = 8158732451463180778LL;
short var_15 = (short)30101;
int zero = 0;
long long int var_16 = -788525509967347055LL;
unsigned short var_17 = (unsigned short)33118;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 456256777U;
long long int var_20 = -5348147892556328119LL;
int var_21 = 1531310887;
unsigned char var_22 = (unsigned char)252;
unsigned short var_23 = (unsigned short)50949;
unsigned char var_24 = (unsigned char)206;
unsigned long long int var_25 = 17419905481816320794ULL;
unsigned short arr_0 [16] [16] ;
unsigned char arr_2 [16] ;
unsigned long long int arr_5 [16] ;
unsigned int arr_6 [16] ;
long long int arr_12 [16] [16] ;
unsigned short arr_3 [16] ;
unsigned short arr_4 [16] ;
long long int arr_7 [16] [16] ;
unsigned char arr_15 [16] ;
unsigned short arr_16 [16] [16] ;
long long int arr_17 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)42993;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 10631682935729144629ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 4039541945U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = 684774752375939688LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned short)56510;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (unsigned short)26231;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = 1780026400675825640LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_15 [i_0] = (unsigned char)50;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned short)7508;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = -2580428588673971782LL;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
