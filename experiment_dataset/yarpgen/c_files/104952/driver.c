#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2611453702U;
short var_4 = (short)10006;
signed char var_6 = (signed char)-126;
unsigned int var_7 = 2417010019U;
int zero = 0;
int var_10 = -352993407;
unsigned long long int var_11 = 5832466340982059093ULL;
unsigned char var_12 = (unsigned char)35;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 15059967318014195452ULL;
short var_15 = (short)-21517;
signed char arr_1 [25] ;
int arr_2 [25] ;
signed char arr_5 [25] [25] ;
unsigned long long int arr_7 [25] [25] ;
short arr_11 [13] ;
unsigned int arr_16 [13] ;
unsigned int arr_24 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (signed char)56;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -1038087969;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)102;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = 16807831425336994287ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (short)-22076;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 647147176U : 2732815295U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_24 [i_0] [i_1] = (i_1 % 2 == 0) ? 1958955678U : 3388189925U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
