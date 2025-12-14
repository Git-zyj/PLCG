#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -955648224;
short var_4 = (short)-30697;
unsigned int var_6 = 4013415504U;
unsigned char var_9 = (unsigned char)134;
long long int var_10 = -7762944409584177509LL;
int var_12 = -871798771;
signed char var_13 = (signed char)-11;
int zero = 0;
unsigned short var_14 = (unsigned short)38650;
long long int var_15 = 4729977396279378650LL;
signed char var_16 = (signed char)-19;
signed char var_17 = (signed char)-85;
unsigned int var_18 = 2669872223U;
int var_19 = 1054298951;
int arr_3 [16] ;
short arr_4 [16] ;
unsigned int arr_6 [25] ;
int arr_8 [25] ;
signed char arr_9 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -531259784 : 205147517;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (short)18529;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 2395859953U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 1616983902;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)43;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
