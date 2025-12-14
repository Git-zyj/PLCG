#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4454852189750313708LL;
unsigned long long int var_13 = 9969461679485415261ULL;
long long int var_14 = 8498762895361609674LL;
int zero = 0;
unsigned int var_15 = 1466174185U;
unsigned long long int var_16 = 18444222923163949560ULL;
short var_17 = (short)17742;
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
