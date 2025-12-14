#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20752;
short var_3 = (short)-5702;
unsigned short var_4 = (unsigned short)59443;
int var_7 = 1394982312;
long long int var_9 = 6573882173169677627LL;
int zero = 0;
unsigned long long int var_16 = 6296055968869279825ULL;
int var_17 = -81690719;
void init() {
}

void checksum() {
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
