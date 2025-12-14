#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1780097076;
int var_8 = 468104971;
unsigned char var_10 = (unsigned char)127;
unsigned long long int var_11 = 2021806846792489950ULL;
unsigned long long int var_13 = 12456254663724080791ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)32174;
unsigned int var_18 = 1171250006U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
