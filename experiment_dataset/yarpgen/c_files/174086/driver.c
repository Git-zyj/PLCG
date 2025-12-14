#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2343;
unsigned short var_2 = (unsigned short)53507;
signed char var_3 = (signed char)85;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 4129615959U;
unsigned long long int var_8 = 10477426805800413615ULL;
int var_10 = -429421258;
unsigned int var_12 = 1116959475U;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
signed char var_17 = (signed char)-58;
int zero = 0;
unsigned int var_20 = 748517119U;
_Bool var_21 = (_Bool)0;
int var_22 = 1231834182;
signed char var_23 = (signed char)115;
unsigned long long int var_24 = 12577816839136427801ULL;
unsigned int arr_4 [10] [10] ;
unsigned long long int arr_5 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 3939685408U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = 925736405371519718ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
