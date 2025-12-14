#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 4099779052U;
signed char var_12 = (signed char)100;
unsigned int var_15 = 3303604440U;
int zero = 0;
long long int var_16 = 5330017215325754655LL;
unsigned char var_17 = (unsigned char)226;
unsigned short var_18 = (unsigned short)39913;
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
