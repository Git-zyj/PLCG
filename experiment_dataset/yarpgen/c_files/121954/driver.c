#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_3 = 1263267350U;
unsigned long long int var_4 = 14433955940157957010ULL;
unsigned long long int var_9 = 12703726959097662886ULL;
short var_11 = (short)-4950;
short var_13 = (short)-31386;
int zero = 0;
unsigned short var_14 = (unsigned short)24062;
unsigned long long int var_15 = 10102513396582185762ULL;
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
