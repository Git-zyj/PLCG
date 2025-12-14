#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)86;
long long int var_8 = 7520292082152122193LL;
unsigned long long int var_13 = 3176483986039631822ULL;
int zero = 0;
unsigned int var_14 = 1735901343U;
signed char var_15 = (signed char)2;
unsigned int var_16 = 1410354852U;
void init() {
}

void checksum() {
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
