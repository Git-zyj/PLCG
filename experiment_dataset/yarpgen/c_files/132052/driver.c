#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-4746;
unsigned char var_4 = (unsigned char)250;
signed char var_7 = (signed char)46;
int var_8 = -1023988727;
int zero = 0;
signed char var_14 = (signed char)40;
short var_15 = (short)9993;
unsigned int var_16 = 2196511871U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
