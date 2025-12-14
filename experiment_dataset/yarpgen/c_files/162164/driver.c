#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4920;
long long int var_1 = -7083254096007520192LL;
unsigned int var_2 = 3659646551U;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 7842701594610253781ULL;
short var_6 = (short)24191;
unsigned char var_8 = (unsigned char)103;
short var_9 = (short)-21886;
short var_10 = (short)16538;
unsigned char var_11 = (unsigned char)252;
int zero = 0;
short var_12 = (short)26719;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1851966254U;
unsigned char var_15 = (unsigned char)188;
unsigned int var_16 = 3099523043U;
unsigned char var_17 = (unsigned char)90;
signed char var_18 = (signed char)29;
unsigned int var_19 = 2271403272U;
unsigned short var_20 = (unsigned short)42963;
unsigned char var_21 = (unsigned char)94;
long long int var_22 = 2098241195819471535LL;
unsigned long long int arr_0 [12] ;
_Bool arr_1 [12] ;
long long int arr_4 [15] [15] ;
unsigned int arr_5 [15] [15] ;
_Bool arr_7 [24] ;
unsigned long long int arr_8 [24] ;
unsigned int arr_2 [12] ;
short arr_3 [12] ;
unsigned short arr_6 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 2644396208992003316ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = 6754757619157662518LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 4126088187U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 17218023955146502102ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 1205655987U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (short)24131;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)58190;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
