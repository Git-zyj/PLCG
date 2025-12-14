#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8534002303781750171ULL;
unsigned long long int var_5 = 4301362318066223924ULL;
unsigned short var_9 = (unsigned short)45175;
int zero = 0;
unsigned int var_12 = 3542364606U;
unsigned int var_13 = 774158555U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
