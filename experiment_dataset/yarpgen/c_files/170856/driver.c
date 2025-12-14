#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3860895871U;
long long int var_2 = 3286381148039277943LL;
unsigned short var_6 = (unsigned short)33616;
short var_9 = (short)-30900;
unsigned int var_10 = 1096263991U;
int zero = 0;
signed char var_15 = (signed char)-87;
int var_16 = 657500756;
long long int var_17 = -3020102210235319208LL;
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
