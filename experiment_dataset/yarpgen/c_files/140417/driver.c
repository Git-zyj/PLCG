#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 2373066951282243927LL;
short var_16 = (short)-17489;
int zero = 0;
unsigned long long int var_20 = 1335857482157955729ULL;
long long int var_21 = -2573665756895248221LL;
unsigned char var_22 = (unsigned char)252;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
