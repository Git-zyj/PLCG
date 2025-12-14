#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1366768122;
unsigned int var_3 = 3881824778U;
unsigned int var_5 = 3836856446U;
signed char var_6 = (signed char)-26;
int zero = 0;
signed char var_15 = (signed char)41;
signed char var_16 = (signed char)74;
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
