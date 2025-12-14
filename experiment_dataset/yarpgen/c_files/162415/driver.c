#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5582395496083321886ULL;
signed char var_6 = (signed char)-81;
unsigned long long int var_9 = 17087767602958163761ULL;
int zero = 0;
unsigned long long int var_10 = 1898617072249413160ULL;
unsigned long long int var_11 = 10171120599346780659ULL;
unsigned long long int var_12 = 17428045833346141728ULL;
unsigned long long int var_13 = 14939015272359168748ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
