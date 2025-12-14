#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10528;
short var_1 = (short)32033;
unsigned short var_2 = (unsigned short)62890;
unsigned char var_3 = (unsigned char)119;
_Bool var_4 = (_Bool)1;
int var_5 = 1386743149;
unsigned long long int var_6 = 9276270975400999760ULL;
unsigned char var_7 = (unsigned char)5;
unsigned long long int var_8 = 16508187471835184126ULL;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-20764;
int var_11 = -909276161;
signed char var_12 = (signed char)38;
unsigned long long int var_13 = 6999532468070061593ULL;
int var_14 = -1205741576;
unsigned int var_15 = 1599130304U;
_Bool var_16 = (_Bool)0;
int var_17 = 91263741;
unsigned int var_18 = 3093665426U;
int zero = 0;
unsigned long long int var_19 = 14722934385040279244ULL;
unsigned char var_20 = (unsigned char)245;
long long int var_21 = 8156416389822376679LL;
signed char var_22 = (signed char)109;
unsigned long long int var_23 = 1544761393775732090ULL;
signed char arr_6 [13] [13] ;
_Bool arr_7 [13] [13] [13] ;
unsigned char arr_8 [13] [13] ;
unsigned int arr_11 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)30;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = 3081017309U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
