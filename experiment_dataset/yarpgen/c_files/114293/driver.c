#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)6366;
unsigned long long int var_7 = 9498906966906206622ULL;
unsigned short var_13 = (unsigned short)13016;
long long int var_15 = -8441441776527495070LL;
int zero = 0;
unsigned short var_18 = (unsigned short)20380;
unsigned short var_19 = (unsigned short)46961;
unsigned int var_20 = 292414302U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
