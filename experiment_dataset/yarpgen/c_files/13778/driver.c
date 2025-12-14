#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -5220341322682106068LL;
unsigned short var_7 = (unsigned short)47730;
unsigned int var_9 = 3741963561U;
unsigned int var_13 = 2200582080U;
int zero = 0;
unsigned int var_16 = 1585418206U;
short var_17 = (short)2065;
long long int var_18 = 2012727979953264928LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
