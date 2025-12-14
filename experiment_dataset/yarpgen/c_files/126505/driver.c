#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)58;
unsigned long long int var_1 = 16101226713870251509ULL;
short var_5 = (short)22178;
unsigned short var_8 = (unsigned short)37126;
short var_9 = (short)-21939;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = -350034580;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
