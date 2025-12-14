#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3880328272U;
long long int var_11 = 8984129066717775191LL;
int zero = 0;
unsigned char var_13 = (unsigned char)161;
unsigned long long int var_14 = 5303023050663039775ULL;
unsigned long long int var_15 = 3414180677068903393ULL;
short var_16 = (short)8496;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
