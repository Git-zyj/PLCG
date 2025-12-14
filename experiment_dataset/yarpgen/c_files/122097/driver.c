#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)27258;
unsigned long long int var_4 = 3302055126264001567ULL;
int var_7 = 156786058;
short var_10 = (short)28958;
int zero = 0;
unsigned short var_13 = (unsigned short)30713;
short var_14 = (short)-6570;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
