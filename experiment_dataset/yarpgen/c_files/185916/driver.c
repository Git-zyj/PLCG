#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17761359975755587269ULL;
unsigned long long int var_7 = 9224083073406779650ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)1956;
unsigned long long int var_16 = 991448614446422098ULL;
void init() {
}

void checksum() {
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
