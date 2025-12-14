#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16101141191758995130ULL;
unsigned short var_4 = (unsigned short)42107;
signed char var_5 = (signed char)96;
int zero = 0;
unsigned int var_18 = 1472365529U;
signed char var_19 = (signed char)56;
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
