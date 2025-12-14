#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 706573941U;
unsigned char var_2 = (unsigned char)74;
signed char var_3 = (signed char)60;
unsigned long long int var_5 = 13966091246294585768ULL;
unsigned long long int var_12 = 3293432186946241656ULL;
signed char var_13 = (signed char)-83;
unsigned long long int var_14 = 4926960646480163407ULL;
unsigned int var_15 = 166690093U;
int var_16 = -390338294;
signed char var_17 = (signed char)30;
unsigned int var_18 = 2858879463U;
int zero = 0;
long long int var_20 = 8496716686290986219LL;
_Bool var_21 = (_Bool)1;
short var_22 = (short)1405;
unsigned char var_23 = (unsigned char)246;
signed char var_24 = (signed char)-17;
unsigned char arr_1 [20] ;
unsigned long long int arr_3 [20] [20] ;
signed char arr_4 [20] ;
unsigned long long int arr_5 [20] [20] ;
_Bool arr_6 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)138;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = 17055572199215321505ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (signed char)-113;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 16369427895681496146ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
