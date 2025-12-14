#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
short var_6 = (short)-15864;
unsigned short var_8 = (unsigned short)55597;
short var_9 = (short)-5063;
unsigned short var_10 = (unsigned short)27750;
int zero = 0;
unsigned long long int var_11 = 14456780366122093159ULL;
unsigned long long int var_12 = 13766748313048991545ULL;
void init() {
}

void checksum() {
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
