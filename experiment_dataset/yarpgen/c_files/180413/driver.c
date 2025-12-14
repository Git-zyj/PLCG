#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 900262090099261504LL;
unsigned long long int var_2 = 16430905504257473130ULL;
unsigned int var_3 = 1578542014U;
unsigned int var_4 = 2686275264U;
int var_7 = 1999353220;
short var_10 = (short)27882;
unsigned char var_12 = (unsigned char)101;
unsigned int var_13 = 1658020056U;
int zero = 0;
unsigned long long int var_14 = 562247027980767543ULL;
unsigned int var_15 = 431554262U;
unsigned char var_16 = (unsigned char)74;
unsigned int var_17 = 36271597U;
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
