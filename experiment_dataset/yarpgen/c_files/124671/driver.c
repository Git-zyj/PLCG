#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)205;
signed char var_12 = (signed char)-84;
short var_13 = (short)-32642;
unsigned char var_14 = (unsigned char)255;
int zero = 0;
short var_15 = (short)-14120;
unsigned long long int var_16 = 2093300379652915534ULL;
signed char var_17 = (signed char)-38;
signed char var_18 = (signed char)60;
signed char var_19 = (signed char)-32;
signed char var_20 = (signed char)-124;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
