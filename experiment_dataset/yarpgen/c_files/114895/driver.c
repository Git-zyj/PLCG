#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)23873;
short var_5 = (short)-28055;
unsigned int var_8 = 3640064220U;
int zero = 0;
short var_10 = (short)13551;
unsigned long long int var_11 = 12210465903881574406ULL;
short var_12 = (short)-25091;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
