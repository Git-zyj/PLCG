#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_13 = 3073338570U;
int var_15 = -1355418541;
unsigned short var_16 = (unsigned short)44497;
int zero = 0;
long long int var_18 = 1671542081178386011LL;
unsigned short var_19 = (unsigned short)51914;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
