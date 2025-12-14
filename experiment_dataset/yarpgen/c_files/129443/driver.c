#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-30;
int var_5 = -2087265099;
signed char var_6 = (signed char)-79;
long long int var_12 = -819225611299524139LL;
int zero = 0;
int var_14 = 642423071;
long long int var_15 = 6606544751627553096LL;
int var_16 = 740641652;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
