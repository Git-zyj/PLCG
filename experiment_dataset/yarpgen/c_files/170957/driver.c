#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -170534117457826323LL;
unsigned int var_5 = 3600974095U;
short var_10 = (short)18188;
int zero = 0;
long long int var_16 = 1079894859102785885LL;
unsigned long long int var_17 = 7125664557530760744ULL;
unsigned char var_18 = (unsigned char)226;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
