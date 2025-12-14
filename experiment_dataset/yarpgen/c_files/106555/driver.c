#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60724;
short var_5 = (short)6094;
unsigned long long int var_7 = 1644667522160767774ULL;
unsigned short var_15 = (unsigned short)21580;
int zero = 0;
unsigned long long int var_16 = 18359063052922248942ULL;
unsigned int var_17 = 4222666931U;
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
