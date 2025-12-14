#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_6 = (unsigned char)93;
unsigned int var_7 = 573609038U;
unsigned int var_14 = 1883350735U;
unsigned int var_16 = 1636495147U;
unsigned int var_17 = 556669208U;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)191;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 17494384228176697135ULL;
_Bool var_23 = (_Bool)0;
unsigned int var_24 = 4218063378U;
unsigned int var_25 = 2397105133U;
unsigned int var_26 = 184658769U;
unsigned short arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)48491;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
