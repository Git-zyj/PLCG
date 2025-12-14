#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2370141848U;
unsigned int var_1 = 2422366061U;
unsigned int var_5 = 3860640663U;
int zero = 0;
int var_13 = -2136807902;
int var_14 = -1681300688;
unsigned char var_15 = (unsigned char)76;
unsigned long long int var_16 = 384980826713396552ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
