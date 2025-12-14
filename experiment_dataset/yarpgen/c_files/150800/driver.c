#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60924;
short var_5 = (short)-23264;
unsigned short var_6 = (unsigned short)55556;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)19335;
int zero = 0;
unsigned int var_15 = 2607249969U;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3383292953U;
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
