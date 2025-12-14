#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2296383402U;
short var_5 = (short)-6830;
signed char var_7 = (signed char)41;
unsigned char var_8 = (unsigned char)151;
unsigned char var_9 = (unsigned char)55;
int zero = 0;
unsigned char var_14 = (unsigned char)172;
unsigned char var_15 = (unsigned char)240;
signed char var_16 = (signed char)-84;
unsigned char var_17 = (unsigned char)253;
unsigned char var_18 = (unsigned char)89;
signed char arr_1 [15] ;
unsigned char arr_2 [15] [15] ;
unsigned int arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 3571336783U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
