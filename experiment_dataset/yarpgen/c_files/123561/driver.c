#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 305947917U;
int var_6 = 1455159805;
signed char var_9 = (signed char)101;
int zero = 0;
unsigned int var_10 = 1817744986U;
unsigned int var_11 = 1642375499U;
unsigned char var_12 = (unsigned char)188;
int var_13 = 2085839088;
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
