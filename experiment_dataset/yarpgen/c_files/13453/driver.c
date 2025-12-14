#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 452689186U;
unsigned long long int var_8 = 1408088982209031910ULL;
unsigned long long int var_9 = 14402073119372956698ULL;
int zero = 0;
unsigned int var_15 = 273022272U;
unsigned long long int var_16 = 1854299163566538986ULL;
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
