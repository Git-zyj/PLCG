#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18207157830821698002ULL;
unsigned char var_2 = (unsigned char)249;
int var_12 = 1841024754;
int zero = 0;
unsigned short var_14 = (unsigned short)26344;
unsigned short var_15 = (unsigned short)7790;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
