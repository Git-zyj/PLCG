#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3442743583U;
signed char var_11 = (signed char)-54;
unsigned int var_18 = 696308769U;
int zero = 0;
unsigned char var_19 = (unsigned char)115;
unsigned short var_20 = (unsigned short)5243;
unsigned long long int var_21 = 17196979617243622332ULL;
unsigned char var_22 = (unsigned char)12;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)4443;
short var_25 = (short)13597;
unsigned int var_26 = 985133048U;
unsigned int var_27 = 1353336188U;
unsigned char var_28 = (unsigned char)136;
unsigned long long int arr_4 [13] ;
signed char arr_10 [13] [13] ;
short arr_15 [13] ;
unsigned long long int arr_7 [13] ;
unsigned char arr_16 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 7033463733738183799ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)66;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = (short)-8415;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 12115715949829036780ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)176;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
