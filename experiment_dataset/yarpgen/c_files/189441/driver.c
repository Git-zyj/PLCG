#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1617657902;
unsigned int var_9 = 818426237U;
unsigned int var_12 = 3285219611U;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = 5667141711753329277LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
