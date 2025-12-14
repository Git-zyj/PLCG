#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1732384439U;
short var_6 = (short)-31165;
signed char var_8 = (signed char)24;
unsigned long long int var_10 = 11597470948600112980ULL;
int zero = 0;
int var_16 = 313927973;
unsigned short var_17 = (unsigned short)25613;
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
