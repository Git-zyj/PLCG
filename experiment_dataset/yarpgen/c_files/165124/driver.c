#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7822681474219671144LL;
unsigned short var_3 = (unsigned short)25416;
short var_7 = (short)-24103;
unsigned int var_15 = 957166315U;
short var_18 = (short)-12640;
int zero = 0;
short var_19 = (short)-9713;
unsigned int var_20 = 1112935596U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
