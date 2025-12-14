#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1846978214U;
unsigned int var_2 = 1950098656U;
unsigned int var_13 = 2040044579U;
int zero = 0;
unsigned int var_14 = 2268745109U;
unsigned int var_15 = 3361223657U;
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
