#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5412919013091214889ULL;
unsigned char var_10 = (unsigned char)231;
long long int var_12 = -7927814061180646130LL;
unsigned long long int var_14 = 11374703092660656012ULL;
int zero = 0;
unsigned long long int var_16 = 7469309042756022923ULL;
int var_17 = 1339741225;
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
