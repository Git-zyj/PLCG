#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2148555780619877746LL;
unsigned long long int var_10 = 16844892494757400786ULL;
int zero = 0;
unsigned long long int var_16 = 10901905927229242455ULL;
unsigned int var_17 = 3592595440U;
void init() {
}

void checksum() {
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
