#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)161;
unsigned int var_5 = 3120837127U;
unsigned char var_11 = (unsigned char)250;
int zero = 0;
unsigned int var_15 = 3810523369U;
unsigned long long int var_16 = 17061765969368540663ULL;
unsigned char var_17 = (unsigned char)52;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
