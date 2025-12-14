#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 13647123091621486599ULL;
unsigned long long int var_11 = 274741464824650300ULL;
int zero = 0;
unsigned long long int var_20 = 14135098019953388918ULL;
long long int var_21 = -5176408611006947726LL;
void init() {
}

void checksum() {
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
