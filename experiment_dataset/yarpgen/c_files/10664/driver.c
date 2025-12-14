#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)8;
unsigned int var_4 = 770171944U;
long long int var_7 = -3167151745277413859LL;
unsigned short var_9 = (unsigned short)61462;
unsigned char var_12 = (unsigned char)226;
short var_13 = (short)-23730;
int zero = 0;
short var_15 = (short)-30754;
long long int var_16 = -5023896799620399958LL;
unsigned char var_17 = (unsigned char)218;
unsigned int var_18 = 4103567996U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
