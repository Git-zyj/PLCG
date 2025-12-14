#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29533;
unsigned short var_2 = (unsigned short)11245;
short var_3 = (short)-31999;
short var_10 = (short)12687;
unsigned int var_15 = 3369011903U;
int zero = 0;
short var_16 = (short)-29360;
int var_17 = 1728251046;
int var_18 = -604059031;
short var_19 = (short)9973;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
