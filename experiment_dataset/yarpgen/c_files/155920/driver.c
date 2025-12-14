#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)112;
int var_6 = -813940968;
unsigned char var_7 = (unsigned char)239;
int zero = 0;
signed char var_15 = (signed char)-126;
signed char var_16 = (signed char)31;
short var_17 = (short)-14292;
unsigned char var_18 = (unsigned char)200;
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
