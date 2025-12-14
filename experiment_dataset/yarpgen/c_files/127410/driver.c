#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3418227805U;
long long int var_9 = 6044667072340044315LL;
long long int var_15 = 7906327747815894865LL;
int zero = 0;
signed char var_16 = (signed char)116;
unsigned long long int var_17 = 16309356398386911913ULL;
unsigned char var_18 = (unsigned char)248;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
