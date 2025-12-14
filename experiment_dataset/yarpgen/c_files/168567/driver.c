#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61761;
int var_7 = -772373490;
unsigned long long int var_13 = 817677653558843133ULL;
unsigned int var_14 = 1450250334U;
short var_17 = (short)18258;
int zero = 0;
int var_18 = -1242043375;
unsigned char var_19 = (unsigned char)216;
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
