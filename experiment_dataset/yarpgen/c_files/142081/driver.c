#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)73;
long long int var_1 = -3505094900097614068LL;
short var_2 = (short)5938;
short var_5 = (short)25282;
unsigned int var_9 = 4066924979U;
int zero = 0;
unsigned short var_10 = (unsigned short)58524;
short var_11 = (short)-5928;
int var_12 = -1095305923;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
