#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)37;
short var_2 = (short)-12643;
unsigned int var_4 = 3066892079U;
long long int var_8 = 6489022678791072976LL;
short var_9 = (short)-5088;
int zero = 0;
long long int var_13 = -8122069751202085846LL;
unsigned long long int var_14 = 10704183696691764932ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
