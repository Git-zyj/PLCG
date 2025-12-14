#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2590607018U;
unsigned short var_1 = (unsigned short)6435;
unsigned int var_6 = 2561492913U;
unsigned short var_7 = (unsigned short)30034;
unsigned int var_8 = 2920819068U;
unsigned short var_9 = (unsigned short)13214;
int zero = 0;
unsigned short var_10 = (unsigned short)46480;
unsigned int var_11 = 1751143214U;
unsigned short var_12 = (unsigned short)14510;
unsigned int var_13 = 265363333U;
unsigned short var_14 = (unsigned short)12333;
unsigned int var_15 = 1291030387U;
unsigned short var_16 = (unsigned short)50086;
unsigned int arr_2 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 3484306766U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
