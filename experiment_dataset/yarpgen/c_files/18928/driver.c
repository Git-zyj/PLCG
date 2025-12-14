#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)31078;
short var_2 = (short)4759;
int var_5 = -1346767513;
long long int var_9 = -8747057896728884712LL;
int var_10 = -1385066135;
short var_13 = (short)27779;
short var_14 = (short)-27954;
long long int var_15 = 3550066159172732256LL;
short var_16 = (short)11974;
int zero = 0;
unsigned int var_17 = 2163671979U;
short var_18 = (short)10308;
unsigned short var_19 = (unsigned short)55461;
unsigned int var_20 = 4113478518U;
unsigned int var_21 = 1948539304U;
long long int var_22 = -1290141964034968996LL;
unsigned long long int var_23 = 14721687450484108328ULL;
unsigned short arr_1 [21] [21] ;
signed char arr_2 [21] ;
unsigned char arr_7 [16] ;
unsigned char arr_8 [16] ;
int arr_12 [13] ;
unsigned long long int arr_15 [25] ;
unsigned int arr_4 [21] ;
short arr_5 [21] ;
short arr_6 [21] ;
signed char arr_9 [16] ;
unsigned short arr_14 [13] [13] ;
long long int arr_22 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)53769;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)-14;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (unsigned char)219;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = -1038140575;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = 14319070820289095249ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 1953195873U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (short)-10125;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (short)23425;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (signed char)16;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)51299;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_22 [i_0] [i_1] = -8017574876654991727LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_22 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
