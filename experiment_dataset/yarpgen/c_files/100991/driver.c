#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 81852534;
long long int var_6 = 1801900430629903621LL;
long long int var_8 = -4305157451645751958LL;
unsigned int var_11 = 1851526883U;
unsigned short var_12 = (unsigned short)19740;
unsigned long long int var_15 = 7266296709450372551ULL;
int var_16 = -412131389;
int zero = 0;
short var_17 = (short)-13856;
unsigned long long int var_18 = 1229854343685030038ULL;
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
