#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1663503009;
unsigned short var_4 = (unsigned short)21521;
int var_8 = 1173724229;
int zero = 0;
unsigned long long int var_15 = 15130413078151347558ULL;
unsigned int var_16 = 3674158151U;
int var_17 = 341523022;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
