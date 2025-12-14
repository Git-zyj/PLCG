#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)21570;
unsigned short var_12 = (unsigned short)6457;
int zero = 0;
int var_14 = 2073323824;
unsigned short var_15 = (unsigned short)31837;
unsigned short var_16 = (unsigned short)21369;
unsigned short var_17 = (unsigned short)50978;
unsigned short var_18 = (unsigned short)10577;
int var_19 = 1988503916;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
