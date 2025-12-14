#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)142;
signed char var_4 = (signed char)-51;
unsigned int var_5 = 2135098448U;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 10337809427876077621ULL;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 1384065334U;
unsigned char var_13 = (unsigned char)14;
int var_15 = 840962268;
unsigned long long int var_18 = 15240615023977759153ULL;
int zero = 0;
unsigned int var_20 = 388659236U;
signed char var_21 = (signed char)-106;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 1468211136U;
_Bool var_24 = (_Bool)0;
unsigned long long int var_25 = 687212277144812208ULL;
_Bool arr_0 [15] ;
long long int arr_1 [15] [15] ;
signed char arr_2 [15] ;
unsigned int arr_5 [20] ;
_Bool arr_3 [15] ;
long long int arr_6 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? -144656958833650866LL : -4526475500035745135LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-40 : (signed char)-102;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 2769177493U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = 6112646025967140628LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
