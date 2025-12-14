#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9341;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)1;
short var_4 = (short)20606;
long long int var_5 = 8864416531224441223LL;
short var_8 = (short)29733;
long long int var_11 = -67193523429414120LL;
int zero = 0;
long long int var_12 = -8624170910904596387LL;
short var_13 = (short)-27748;
unsigned char var_14 = (unsigned char)73;
unsigned char var_15 = (unsigned char)208;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)48397;
unsigned char var_18 = (unsigned char)212;
long long int var_19 = -1243788062606982276LL;
unsigned short var_20 = (unsigned short)17281;
int var_21 = 847584741;
int var_22 = -486421063;
_Bool arr_0 [23] ;
unsigned short arr_1 [23] [23] ;
unsigned char arr_3 [13] [13] ;
short arr_4 [13] ;
unsigned short arr_5 [13] ;
unsigned short arr_6 [13] ;
short arr_8 [13] [13] [13] [13] ;
long long int arr_9 [13] [13] [13] [13] ;
int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)63634;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)189 : (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (short)2222;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned short)41475;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (unsigned short)17608;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (short)26853;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = -7956059371922769106LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 1437414814;
}

void checksum() {
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
