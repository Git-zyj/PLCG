#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2072131900;
unsigned long long int var_2 = 950289835741899270ULL;
int var_7 = 1035794893;
signed char var_9 = (signed char)(-127 - 1);
int zero = 0;
unsigned long long int var_14 = 3501974804428919193ULL;
unsigned short var_15 = (unsigned short)12881;
short var_16 = (short)-14251;
unsigned int var_17 = 2920715342U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
