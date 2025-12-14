#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47397;
long long int var_2 = 2330073546868722075LL;
_Bool var_3 = (_Bool)0;
short var_7 = (short)1726;
long long int var_8 = 7953305524209034696LL;
unsigned char var_9 = (unsigned char)230;
unsigned char var_11 = (unsigned char)9;
int var_12 = 876598897;
signed char var_13 = (signed char)87;
int var_16 = 1373984481;
long long int var_18 = -4052322682483501791LL;
unsigned long long int var_19 = 12783816041374644245ULL;
int zero = 0;
long long int var_20 = 7026068341457743787LL;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 3286870045U;
_Bool var_23 = (_Bool)0;
int var_24 = 1091492723;
int var_25 = 758075109;
unsigned long long int var_26 = 6179445359340647126ULL;
long long int arr_0 [13] [13] ;
unsigned short arr_1 [13] ;
unsigned int arr_3 [13] ;
short arr_7 [23] [23] ;
unsigned char arr_10 [23] ;
unsigned short arr_13 [23] [23] ;
long long int arr_4 [13] ;
long long int arr_5 [13] [13] ;
_Bool arr_6 [13] ;
unsigned short arr_11 [23] ;
short arr_12 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 2558305821434992224LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)43260;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 1534734951U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-13772;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)57283;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 7845635264889054104LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = -7118307889502207243LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (unsigned short)7911;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_12 [i_0] [i_1] = (short)31154;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
