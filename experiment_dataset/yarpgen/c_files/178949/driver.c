#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-6214;
unsigned int var_5 = 7236946U;
unsigned long long int var_11 = 8880042460917227175ULL;
int zero = 0;
int var_13 = -1865441764;
unsigned char var_14 = (unsigned char)211;
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
