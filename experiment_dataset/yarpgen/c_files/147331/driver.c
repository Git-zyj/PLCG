#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)176;
int var_4 = -2135713550;
int var_5 = 1202788820;
signed char var_12 = (signed char)-96;
int zero = 0;
int var_15 = -1259820316;
short var_16 = (short)-22349;
long long int var_17 = -8960895903017959573LL;
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
