#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_6 = 2425827786U;
unsigned long long int var_7 = 6183088925915344229ULL;
signed char var_9 = (signed char)-107;
unsigned int var_16 = 2498465446U;
unsigned long long int var_18 = 16215706644780828003ULL;
int zero = 0;
short var_20 = (short)-2928;
unsigned int var_21 = 3410002163U;
int var_22 = -2110297895;
unsigned long long int var_23 = 4318499981048471728ULL;
signed char var_24 = (signed char)35;
int var_25 = 550712044;
long long int arr_2 [13] [13] ;
unsigned char arr_3 [13] ;
int arr_5 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 1840819015182307907LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = -448160409;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
