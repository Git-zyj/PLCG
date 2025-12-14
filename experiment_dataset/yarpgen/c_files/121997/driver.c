#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)5230;
int var_3 = -107080456;
int var_6 = -533481974;
unsigned long long int var_7 = 9244953942916088862ULL;
short var_11 = (short)-14145;
int zero = 0;
unsigned short var_12 = (unsigned short)27714;
unsigned short var_13 = (unsigned short)33805;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
