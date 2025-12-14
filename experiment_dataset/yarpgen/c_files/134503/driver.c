#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 2995287453437172789ULL;
unsigned int var_12 = 638296597U;
long long int var_13 = -4470380230610756935LL;
int zero = 0;
int var_15 = 1710369471;
unsigned short var_16 = (unsigned short)39378;
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
