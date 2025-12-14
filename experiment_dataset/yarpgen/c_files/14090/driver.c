#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-42;
unsigned int var_3 = 227729431U;
signed char var_4 = (signed char)-116;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 10577339919984853306ULL;
unsigned int var_11 = 295373839U;
_Bool var_13 = (_Bool)1;
unsigned int var_15 = 1579959352U;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-32373;
unsigned long long int var_18 = 1182172431875607421ULL;
int zero = 0;
unsigned int var_20 = 685325032U;
_Bool var_21 = (_Bool)0;
short var_22 = (short)21607;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)1;
unsigned long long int arr_0 [18] ;
signed char arr_2 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 7261902476318548516ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)11;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
