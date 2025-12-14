#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)125;
unsigned char var_1 = (unsigned char)18;
unsigned short var_3 = (unsigned short)24121;
unsigned char var_4 = (unsigned char)87;
int var_9 = 397630772;
signed char var_10 = (signed char)(-127 - 1);
unsigned char var_12 = (unsigned char)135;
unsigned short var_13 = (unsigned short)51790;
int var_14 = 803949392;
signed char var_15 = (signed char)-36;
signed char var_16 = (signed char)-53;
signed char var_17 = (signed char)-26;
unsigned long long int var_18 = 5614265903664440178ULL;
int zero = 0;
signed char var_20 = (signed char)-20;
int var_21 = 1664000448;
unsigned long long int var_22 = 860798622496628836ULL;
signed char var_23 = (signed char)84;
unsigned int var_24 = 3208851108U;
unsigned int arr_4 [18] [18] ;
unsigned int arr_5 [18] ;
unsigned int arr_13 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 2939931281U : 1531966085U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1303649814U : 2373906871U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 3405265613U : 3162709392U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
