#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 14118773801486253853ULL;
unsigned char var_2 = (unsigned char)78;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-60;
unsigned long long int var_7 = 5111322488758721552ULL;
unsigned int var_8 = 3237094446U;
long long int var_11 = -4797336933041691228LL;
unsigned int var_14 = 881793636U;
long long int var_19 = 3042705953453691827LL;
int zero = 0;
unsigned int var_20 = 357767232U;
unsigned short var_21 = (unsigned short)32974;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 1459310027U;
unsigned int var_24 = 1817418947U;
signed char arr_0 [13] ;
unsigned int arr_1 [13] ;
unsigned long long int arr_2 [13] ;
unsigned char arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (signed char)-88;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 3240478078U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 11427143593097663935ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)101;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
