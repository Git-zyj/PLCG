#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)20573;
unsigned short var_6 = (unsigned short)29541;
_Bool var_7 = (_Bool)0;
unsigned int var_12 = 1586896775U;
unsigned char var_13 = (unsigned char)242;
int zero = 0;
unsigned int var_14 = 4077036677U;
int var_15 = 51245085;
short var_16 = (short)-29555;
void init() {
}

void checksum() {
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
