#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)30888;
short var_5 = (short)-3647;
unsigned int var_6 = 2232689084U;
long long int var_10 = -2953519880593134933LL;
long long int var_12 = -4720834404071030414LL;
int zero = 0;
short var_14 = (short)20114;
long long int var_15 = 632628700995683503LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
