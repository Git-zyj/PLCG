#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 14922561145927260680ULL;
long long int var_12 = -8115158238889263746LL;
unsigned long long int var_14 = 17792084910278436236ULL;
short var_16 = (short)-23893;
int zero = 0;
unsigned long long int var_18 = 2741105973142756376ULL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
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
