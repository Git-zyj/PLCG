#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 48268068;
unsigned short var_5 = (unsigned short)38664;
unsigned int var_7 = 3553280463U;
unsigned long long int var_9 = 6482853496188507837ULL;
long long int var_13 = 2790092460304359757LL;
int zero = 0;
unsigned char var_14 = (unsigned char)76;
long long int var_15 = 7076965838817172877LL;
short var_16 = (short)-14670;
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
