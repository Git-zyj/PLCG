#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)29;
unsigned long long int var_5 = 4383300338448949290ULL;
short var_7 = (short)-2274;
unsigned long long int var_9 = 6049982143997368975ULL;
short var_16 = (short)-15704;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = -270980;
unsigned int var_19 = 3291741100U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
