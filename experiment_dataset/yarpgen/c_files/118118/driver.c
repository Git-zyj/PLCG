#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 414923835U;
unsigned long long int var_1 = 4155074180522747657ULL;
long long int var_8 = -3027686293428275350LL;
int zero = 0;
signed char var_12 = (signed char)92;
unsigned long long int var_13 = 11279066549446997891ULL;
short var_14 = (short)-2870;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
