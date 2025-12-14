#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3660381810U;
unsigned char var_6 = (unsigned char)62;
unsigned short var_7 = (unsigned short)23139;
unsigned short var_11 = (unsigned short)58855;
int zero = 0;
unsigned int var_12 = 1813937840U;
unsigned long long int var_13 = 8330239562340157638ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
