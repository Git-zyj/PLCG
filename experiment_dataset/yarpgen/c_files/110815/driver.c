#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)63088;
_Bool var_11 = (_Bool)1;
int var_14 = 14115782;
unsigned short var_16 = (unsigned short)49635;
unsigned int var_17 = 4075897758U;
unsigned char var_18 = (unsigned char)111;
int zero = 0;
signed char var_20 = (signed char)20;
short var_21 = (short)-19051;
signed char var_22 = (signed char)29;
unsigned int var_23 = 2035716129U;
short var_24 = (short)-24101;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
