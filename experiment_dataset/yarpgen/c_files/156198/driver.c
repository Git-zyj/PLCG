#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)56;
unsigned int var_4 = 2404742434U;
int var_5 = 520670355;
signed char var_8 = (signed char)48;
short var_9 = (short)3068;
int zero = 0;
short var_20 = (short)23683;
unsigned char var_21 = (unsigned char)223;
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
