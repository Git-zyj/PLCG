#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1886496796279540324LL;
short var_9 = (short)16584;
unsigned int var_12 = 3162156296U;
int zero = 0;
long long int var_16 = -6684651364306896051LL;
signed char var_17 = (signed char)-96;
void init() {
}

void checksum() {
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
