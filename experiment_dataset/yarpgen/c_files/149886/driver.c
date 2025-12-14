#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3443278004U;
unsigned int var_5 = 487539127U;
unsigned int var_8 = 1115922840U;
unsigned int var_9 = 703337374U;
int zero = 0;
unsigned int var_15 = 3229429797U;
unsigned int var_16 = 3219373040U;
unsigned int var_17 = 3203831838U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
