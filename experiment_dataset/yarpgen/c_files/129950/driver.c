#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)39;
unsigned short var_2 = (unsigned short)38059;
int var_3 = 1277080631;
unsigned int var_7 = 3865843623U;
unsigned int var_8 = 1774295806U;
int var_9 = -1853574117;
int var_10 = -162251703;
int zero = 0;
long long int var_12 = 8531135566576000415LL;
int var_13 = -2121605898;
unsigned int var_14 = 3292524761U;
long long int var_15 = 1272154557166763962LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
