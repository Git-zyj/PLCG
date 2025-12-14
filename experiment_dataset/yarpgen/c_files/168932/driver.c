#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)29524;
short var_7 = (short)-18396;
unsigned long long int var_9 = 6384579884500751460ULL;
unsigned int var_11 = 1637125663U;
int zero = 0;
unsigned long long int var_14 = 15658583067188179216ULL;
unsigned int var_15 = 3013367884U;
short var_16 = (short)-23067;
short var_17 = (short)-12906;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
