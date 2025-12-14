#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -52690618;
int var_2 = -537739323;
unsigned char var_5 = (unsigned char)235;
unsigned int var_6 = 4157599722U;
long long int var_7 = -2899694420093547234LL;
unsigned long long int var_8 = 10427378419601704287ULL;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)30772;
long long int var_11 = -8359047880036792153LL;
unsigned int var_13 = 2872833534U;
short var_14 = (short)-28923;
_Bool var_15 = (_Bool)1;
unsigned short var_17 = (unsigned short)8134;
int zero = 0;
long long int var_18 = -609765268430628670LL;
unsigned int var_19 = 3367018855U;
int var_20 = -1459480899;
unsigned char var_21 = (unsigned char)118;
int var_22 = 1731880470;
unsigned char var_23 = (unsigned char)51;
unsigned char var_24 = (unsigned char)117;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)46;
unsigned int var_27 = 2249370928U;
unsigned short var_28 = (unsigned short)11291;
_Bool arr_9 [21] [21] [21] ;
unsigned short arr_10 [21] [21] ;
unsigned char arr_11 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)20070;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)7;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
