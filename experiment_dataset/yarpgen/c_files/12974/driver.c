#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1781437144;
unsigned long long int var_1 = 15659394613190569481ULL;
unsigned long long int var_2 = 8836158358655154682ULL;
int var_3 = -1605035710;
unsigned char var_7 = (unsigned char)205;
signed char var_8 = (signed char)97;
int zero = 0;
unsigned long long int var_14 = 3867782333452204805ULL;
int var_15 = 1884266;
unsigned long long int var_16 = 16744127328243228664ULL;
unsigned long long int var_17 = 4674233581356406556ULL;
signed char arr_0 [12] ;
unsigned long long int arr_1 [12] ;
unsigned int arr_2 [12] ;
_Bool arr_3 [12] [12] ;
unsigned int arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 8222114886119384015ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 1211672161U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 2526740708U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
