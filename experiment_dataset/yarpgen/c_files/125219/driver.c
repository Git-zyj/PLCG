#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)97;
long long int var_8 = 2102180063106409887LL;
long long int var_11 = -1820896279260943422LL;
int zero = 0;
short var_12 = (short)-12213;
signed char var_13 = (signed char)102;
short var_14 = (short)19647;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
