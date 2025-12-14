#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 348928017279111681LL;
int var_2 = 1255942845;
unsigned short var_4 = (unsigned short)7519;
short var_7 = (short)-15468;
long long int var_8 = -6591126045119684240LL;
int zero = 0;
unsigned short var_13 = (unsigned short)47817;
long long int var_14 = -3037182392989222407LL;
short var_15 = (short)28576;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
