#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)173;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 1348186095U;
signed char var_4 = (signed char)-95;
unsigned char var_7 = (unsigned char)179;
signed char var_8 = (signed char)108;
unsigned char var_9 = (unsigned char)221;
int zero = 0;
unsigned int var_10 = 3659146204U;
int var_11 = 663013459;
unsigned int var_12 = 3223134368U;
unsigned int var_13 = 1753678577U;
unsigned long long int var_14 = 17515115011158711121ULL;
short var_15 = (short)14398;
signed char var_16 = (signed char)102;
short var_17 = (short)24766;
signed char var_18 = (signed char)-87;
unsigned int var_19 = 729009340U;
_Bool var_20 = (_Bool)1;
unsigned char arr_5 [21] [21] ;
int arr_6 [21] [21] ;
unsigned int arr_8 [21] [21] [21] ;
long long int arr_12 [21] [21] [21] ;
signed char arr_3 [25] ;
int arr_9 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = -2074484804;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 24063881U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 6713552112392355884LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 438336608 : -1806661784;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
