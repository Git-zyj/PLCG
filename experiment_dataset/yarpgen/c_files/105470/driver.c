#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 443603254U;
unsigned int var_4 = 2808049339U;
int var_7 = -1735558560;
int zero = 0;
unsigned long long int var_11 = 12133462207787726815ULL;
unsigned char var_12 = (unsigned char)252;
void init() {
}

void checksum() {
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
