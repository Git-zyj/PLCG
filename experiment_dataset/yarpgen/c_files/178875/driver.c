#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)26878;
long long int var_5 = 6979151781110457151LL;
unsigned int var_6 = 2710813456U;
unsigned int var_8 = 304963225U;
int zero = 0;
unsigned int var_13 = 3156379838U;
unsigned int var_14 = 1144166990U;
void init() {
}

void checksum() {
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
