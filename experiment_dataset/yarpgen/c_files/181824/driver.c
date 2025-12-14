#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16853366224836368869ULL;
unsigned char var_11 = (unsigned char)80;
unsigned long long int var_14 = 15770375588195558136ULL;
int zero = 0;
int var_17 = 190585720;
unsigned int var_18 = 2030088210U;
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
