#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)3;
unsigned int var_12 = 3604274892U;
unsigned char var_13 = (unsigned char)32;
int zero = 0;
signed char var_16 = (signed char)-98;
signed char var_17 = (signed char)24;
short var_18 = (short)-22710;
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
