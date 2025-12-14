#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14163474520445190426ULL;
short var_3 = (short)16423;
long long int var_4 = 9195461572486930901LL;
unsigned short var_7 = (unsigned short)65160;
int var_14 = 1652134580;
int zero = 0;
unsigned char var_15 = (unsigned char)61;
unsigned int var_16 = 2529394650U;
short var_17 = (short)24265;
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
