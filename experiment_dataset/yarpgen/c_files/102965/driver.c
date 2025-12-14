#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)41973;
unsigned int var_6 = 3696790852U;
int var_8 = -796996346;
unsigned char var_10 = (unsigned char)51;
short var_15 = (short)-4991;
signed char var_17 = (signed char)102;
int zero = 0;
unsigned char var_20 = (unsigned char)237;
unsigned char var_21 = (unsigned char)84;
unsigned short var_22 = (unsigned short)1908;
unsigned char var_23 = (unsigned char)84;
signed char var_24 = (signed char)-100;
unsigned char var_25 = (unsigned char)12;
short var_26 = (short)-5116;
_Bool var_27 = (_Bool)1;
unsigned int arr_0 [23] ;
unsigned short arr_1 [23] ;
unsigned short arr_2 [23] [23] ;
unsigned int arr_3 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 2348174307U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)59762;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)40066;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 141954836U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
