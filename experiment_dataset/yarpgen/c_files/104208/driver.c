#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -3804425566633378132LL;
long long int var_15 = 6402950804073737850LL;
int zero = 0;
long long int var_18 = -2256405662638916100LL;
unsigned int var_19 = 2738357174U;
short var_20 = (short)-30983;
long long int var_21 = 1204464746789598775LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
