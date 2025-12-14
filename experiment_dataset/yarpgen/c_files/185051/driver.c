#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 279452242337104915ULL;
int var_8 = 183664461;
long long int var_9 = -4876583866564782924LL;
unsigned char var_15 = (unsigned char)87;
int zero = 0;
unsigned int var_17 = 2316666224U;
unsigned int var_18 = 699593982U;
void init() {
}

void checksum() {
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
