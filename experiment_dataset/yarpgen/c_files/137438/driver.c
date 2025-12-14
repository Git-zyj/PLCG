#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -144402251;
signed char var_7 = (signed char)77;
unsigned int var_8 = 2119217005U;
short var_9 = (short)14496;
int zero = 0;
short var_15 = (short)21898;
unsigned char var_16 = (unsigned char)101;
void init() {
}

void checksum() {
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
