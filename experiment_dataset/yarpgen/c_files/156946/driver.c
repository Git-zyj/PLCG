#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)3;
unsigned char var_11 = (unsigned char)238;
int zero = 0;
unsigned long long int var_14 = 11146804521575506819ULL;
unsigned long long int var_15 = 6783247304971428576ULL;
long long int var_16 = 7329254155472329808LL;
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
