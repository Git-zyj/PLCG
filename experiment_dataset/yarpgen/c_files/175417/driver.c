#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34597;
int var_3 = -650529039;
unsigned short var_5 = (unsigned short)562;
short var_6 = (short)-2221;
int zero = 0;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-11677;
short var_15 = (short)-14833;
unsigned long long int var_16 = 16654144250314897692ULL;
unsigned short var_17 = (unsigned short)16641;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
