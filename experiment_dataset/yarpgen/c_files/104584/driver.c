#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 812368485U;
unsigned int var_3 = 3399711184U;
unsigned int var_5 = 1066763854U;
long long int var_7 = -1933552277186214600LL;
int zero = 0;
unsigned int var_11 = 3261883323U;
unsigned int var_12 = 824790453U;
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
