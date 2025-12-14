#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_11 = (unsigned short)32043;
unsigned long long int var_12 = 4274061313236596486ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)24164;
unsigned int var_16 = 161331327U;
unsigned int var_17 = 1714847805U;
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
