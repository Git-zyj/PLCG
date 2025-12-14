#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)-28;
short var_4 = (short)30256;
short var_7 = (short)4640;
unsigned char var_8 = (unsigned char)234;
unsigned int var_9 = 2286695574U;
int var_10 = 1433462626;
unsigned char var_11 = (unsigned char)247;
unsigned short var_12 = (unsigned short)42134;
long long int var_13 = -7168963274891106184LL;
unsigned char var_14 = (unsigned char)208;
unsigned long long int var_17 = 4360088833535044509ULL;
unsigned char var_18 = (unsigned char)67;
unsigned short var_19 = (unsigned short)300;
int zero = 0;
int var_20 = -222082873;
unsigned char var_21 = (unsigned char)153;
unsigned char var_22 = (unsigned char)126;
signed char var_23 = (signed char)-42;
unsigned int var_24 = 4049262976U;
unsigned char var_25 = (unsigned char)71;
unsigned char var_26 = (unsigned char)106;
int var_27 = -1354432902;
_Bool var_28 = (_Bool)0;
unsigned int arr_0 [21] [21] ;
_Bool arr_1 [21] ;
unsigned long long int arr_2 [21] [21] ;
signed char arr_9 [21] [21] [21] ;
signed char arr_11 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 2730641600U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 177650758831815297ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)109;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (signed char)-121 : (signed char)49;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
