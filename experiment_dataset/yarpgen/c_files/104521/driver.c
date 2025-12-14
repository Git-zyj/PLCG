#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14702;
short var_4 = (short)-20303;
unsigned long long int var_5 = 109548163894668223ULL;
short var_8 = (short)-25823;
short var_9 = (short)-12937;
unsigned long long int var_10 = 11523331491132264512ULL;
int var_11 = -21131528;
unsigned int var_12 = 2227436688U;
short var_13 = (short)8116;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-107;
short var_16 = (short)22453;
short var_17 = (short)16918;
long long int var_18 = 4842959742659519492LL;
unsigned short var_19 = (unsigned short)62595;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-1547;
signed char var_22 = (signed char)-122;
signed char var_23 = (signed char)23;
unsigned short var_24 = (unsigned short)33188;
short var_25 = (short)-27897;
unsigned short arr_0 [15] ;
unsigned short arr_2 [15] [15] ;
signed char arr_4 [15] [15] ;
unsigned char arr_17 [22] ;
int arr_20 [18] ;
unsigned long long int arr_3 [15] ;
short arr_8 [15] [15] ;
short arr_13 [15] [15] [15] ;
unsigned short arr_21 [18] [18] ;
long long int arr_22 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)26276;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)60034;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-108;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = -561636602;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 10390893558483185950ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (short)22811;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)-13700;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned short)45404;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_22 [i_0] = -168505841388943107LL;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
