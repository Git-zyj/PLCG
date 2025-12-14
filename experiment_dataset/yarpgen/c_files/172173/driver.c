#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11375;
int var_3 = 1986137762;
unsigned int var_5 = 3979282275U;
short var_12 = (short)-23785;
short var_13 = (short)-17982;
unsigned long long int var_17 = 206606067828055694ULL;
int zero = 0;
short var_20 = (short)30357;
int var_21 = -1404464133;
int var_22 = 1087470262;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
