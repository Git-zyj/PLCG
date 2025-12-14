#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29471;
unsigned short var_5 = (unsigned short)45717;
unsigned long long int var_16 = 14315929056179845110ULL;
int zero = 0;
unsigned int var_18 = 205801855U;
short var_19 = (short)-30983;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
