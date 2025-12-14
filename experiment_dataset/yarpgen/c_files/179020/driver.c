#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1348990144;
unsigned long long int var_16 = 10514547654787491243ULL;
long long int var_18 = 2504258985834814800LL;
int zero = 0;
unsigned int var_19 = 2084962766U;
unsigned long long int var_20 = 9706655721149359171ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
