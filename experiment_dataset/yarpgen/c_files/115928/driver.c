#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)41;
short var_10 = (short)-13030;
unsigned int var_13 = 735218804U;
int zero = 0;
signed char var_15 = (signed char)-28;
long long int var_16 = -5797364161715868463LL;
short var_17 = (short)21882;
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
