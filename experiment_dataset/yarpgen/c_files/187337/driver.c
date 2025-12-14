#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-23239;
short var_3 = (short)20707;
short var_6 = (short)-629;
unsigned short var_9 = (unsigned short)10153;
unsigned short var_11 = (unsigned short)30891;
unsigned short var_12 = (unsigned short)30446;
short var_14 = (short)1512;
int zero = 0;
short var_15 = (short)-20272;
unsigned short var_16 = (unsigned short)42137;
unsigned short var_17 = (unsigned short)9948;
short var_18 = (short)-26540;
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
