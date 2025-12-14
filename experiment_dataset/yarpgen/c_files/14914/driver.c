#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4019510025120796179ULL;
unsigned long long int var_4 = 14143221312781766923ULL;
unsigned int var_9 = 2921055314U;
int zero = 0;
int var_11 = -1678757442;
int var_12 = 46170175;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
