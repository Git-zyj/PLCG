#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 437234087U;
signed char var_8 = (signed char)97;
unsigned int var_14 = 2661820414U;
int zero = 0;
signed char var_15 = (signed char)16;
unsigned long long int var_16 = 15195383252476610882ULL;
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
