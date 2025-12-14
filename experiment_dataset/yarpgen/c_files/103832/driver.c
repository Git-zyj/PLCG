#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)162;
unsigned char var_11 = (unsigned char)213;
long long int var_12 = -3563817539007089026LL;
unsigned int var_14 = 2137368421U;
int zero = 0;
signed char var_15 = (signed char)23;
unsigned long long int var_16 = 7623854569005574940ULL;
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
