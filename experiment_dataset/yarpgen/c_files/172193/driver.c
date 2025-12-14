#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19375;
unsigned char var_1 = (unsigned char)174;
signed char var_3 = (signed char)-122;
unsigned long long int var_4 = 8823324637366554644ULL;
signed char var_5 = (signed char)92;
unsigned char var_8 = (unsigned char)100;
unsigned short var_10 = (unsigned short)19055;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = -6414870412319257991LL;
unsigned char var_13 = (unsigned char)130;
long long int var_14 = 6759814393004479210LL;
long long int var_15 = -9215087721438824186LL;
unsigned long long int var_16 = 4901715655740625833ULL;
long long int arr_0 [13] [13] ;
_Bool arr_1 [13] [13] ;
unsigned char arr_3 [21] ;
signed char arr_4 [21] [21] ;
_Bool arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 3682236491687054633LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
