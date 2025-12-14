#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -9090573933546739184LL;
short var_8 = (short)9464;
signed char var_11 = (signed char)4;
int zero = 0;
unsigned int var_12 = 1675017909U;
unsigned char var_13 = (unsigned char)45;
long long int var_14 = 8549021868741396695LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
