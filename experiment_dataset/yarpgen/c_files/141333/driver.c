#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2730492898U;
unsigned long long int var_10 = 6797491824873009792ULL;
unsigned long long int var_12 = 805619316203771345ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)18;
unsigned long long int var_18 = 15305906907191742829ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
