#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)32702;
signed char var_9 = (signed char)51;
short var_10 = (short)-19982;
int zero = 0;
short var_20 = (short)29129;
unsigned short var_21 = (unsigned short)21241;
signed char var_22 = (signed char)45;
unsigned int var_23 = 1013850257U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
