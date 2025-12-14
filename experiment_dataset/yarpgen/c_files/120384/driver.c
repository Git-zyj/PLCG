#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)319;
unsigned int var_5 = 347716425U;
short var_6 = (short)-7150;
short var_7 = (short)4793;
unsigned short var_9 = (unsigned short)59496;
unsigned short var_11 = (unsigned short)51989;
unsigned long long int var_13 = 8945203706711934966ULL;
short var_17 = (short)-19398;
int var_19 = -1781148991;
int zero = 0;
signed char var_20 = (signed char)-59;
unsigned char var_21 = (unsigned char)140;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
