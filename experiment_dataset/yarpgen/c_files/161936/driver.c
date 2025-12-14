#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34588;
unsigned short var_1 = (unsigned short)12240;
unsigned int var_12 = 3700946291U;
int zero = 0;
unsigned short var_18 = (unsigned short)22232;
unsigned short var_19 = (unsigned short)44918;
unsigned long long int var_20 = 7274907927854195694ULL;
short var_21 = (short)-7257;
unsigned int arr_0 [11] ;
unsigned int arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 4113007761U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 3850649801U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
