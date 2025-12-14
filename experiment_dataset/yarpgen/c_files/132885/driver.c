#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14214;
unsigned long long int var_3 = 5692644398559036598ULL;
unsigned short var_5 = (unsigned short)8354;
unsigned char var_14 = (unsigned char)249;
int zero = 0;
unsigned long long int var_17 = 3899851236674039799ULL;
signed char var_18 = (signed char)-101;
void init() {
}

void checksum() {
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
