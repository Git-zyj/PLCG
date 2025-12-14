#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 589989297;
unsigned short var_2 = (unsigned short)29070;
unsigned long long int var_3 = 18183157025529741966ULL;
long long int var_5 = 6626554186233055868LL;
int var_6 = -796020362;
unsigned short var_8 = (unsigned short)12230;
short var_9 = (short)-20896;
int var_12 = -2075973557;
int var_13 = -1293933333;
int zero = 0;
unsigned short var_14 = (unsigned short)58756;
int var_15 = -965017262;
unsigned short var_16 = (unsigned short)25095;
short var_17 = (short)1798;
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
