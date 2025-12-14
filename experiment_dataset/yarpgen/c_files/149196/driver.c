#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2101127336;
unsigned short var_5 = (unsigned short)14004;
unsigned int var_16 = 2439932195U;
int zero = 0;
unsigned short var_18 = (unsigned short)5521;
unsigned short var_19 = (unsigned short)30077;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
