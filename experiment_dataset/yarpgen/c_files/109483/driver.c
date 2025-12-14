#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 384686581696423901LL;
signed char var_16 = (signed char)25;
unsigned int var_17 = 1383607188U;
int zero = 0;
long long int var_19 = 2451266201846979318LL;
unsigned int var_20 = 761900915U;
unsigned short var_21 = (unsigned short)21438;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
