#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1234286624U;
unsigned int var_2 = 1721367465U;
unsigned int var_7 = 1479436636U;
unsigned int var_9 = 1686936541U;
int zero = 0;
unsigned int var_13 = 2018180646U;
unsigned int var_14 = 668832073U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
