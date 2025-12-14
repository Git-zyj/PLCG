#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2358014413U;
int var_6 = 334089022;
int var_10 = -1211812887;
int var_12 = -1806724039;
unsigned int var_13 = 1197808868U;
int zero = 0;
short var_14 = (short)8871;
unsigned short var_15 = (unsigned short)44285;
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
