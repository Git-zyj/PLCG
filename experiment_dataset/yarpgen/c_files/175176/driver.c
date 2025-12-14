#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2079441734U;
unsigned short var_14 = (unsigned short)51792;
short var_16 = (short)-29250;
int zero = 0;
unsigned long long int var_17 = 2875779820734542219ULL;
unsigned short var_18 = (unsigned short)37252;
unsigned long long int var_19 = 8374627347627672525ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
