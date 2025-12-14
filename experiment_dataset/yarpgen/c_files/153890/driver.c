#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)139;
signed char var_5 = (signed char)30;
unsigned char var_6 = (unsigned char)193;
unsigned short var_10 = (unsigned short)53922;
int zero = 0;
unsigned char var_11 = (unsigned char)55;
int var_12 = -904478048;
unsigned int var_13 = 2111764855U;
unsigned char var_14 = (unsigned char)164;
int var_15 = 555911327;
signed char var_16 = (signed char)82;
unsigned short var_17 = (unsigned short)33241;
unsigned int var_18 = 3171374692U;
unsigned char var_19 = (unsigned char)188;
signed char var_20 = (signed char)69;
unsigned short var_21 = (unsigned short)32979;
int var_22 = 1955308635;
_Bool arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
