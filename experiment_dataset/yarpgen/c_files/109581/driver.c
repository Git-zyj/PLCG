#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-3607;
unsigned short var_5 = (unsigned short)40162;
unsigned char var_6 = (unsigned char)156;
int zero = 0;
int var_15 = -1606846751;
signed char var_16 = (signed char)-61;
int var_17 = -781248650;
int var_18 = 1677522446;
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
