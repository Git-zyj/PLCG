#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)45;
_Bool var_6 = (_Bool)0;
signed char var_14 = (signed char)37;
int zero = 0;
unsigned char var_15 = (unsigned char)211;
unsigned char var_16 = (unsigned char)201;
short var_17 = (short)-15252;
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
