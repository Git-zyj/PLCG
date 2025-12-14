#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16145648783780666017ULL;
unsigned short var_3 = (unsigned short)52920;
signed char var_4 = (signed char)6;
int var_5 = 598221559;
long long int var_6 = -3732354220257145932LL;
unsigned short var_8 = (unsigned short)51406;
long long int var_11 = 8547137416846101983LL;
unsigned short var_13 = (unsigned short)34288;
short var_14 = (short)-27654;
signed char var_15 = (signed char)126;
unsigned long long int var_16 = 5850950869437100497ULL;
short var_19 = (short)-23136;
int zero = 0;
unsigned char var_20 = (unsigned char)72;
unsigned char var_21 = (unsigned char)151;
long long int var_22 = -6299266070851185984LL;
unsigned long long int var_23 = 3267794007028042149ULL;
unsigned char var_24 = (unsigned char)190;
long long int var_25 = 5068325905435160526LL;
_Bool arr_0 [13] [13] ;
_Bool arr_1 [13] [13] ;
_Bool arr_2 [13] ;
long long int arr_3 [13] ;
short arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = -594320781897727336LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (short)7011;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
