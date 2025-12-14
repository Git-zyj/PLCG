#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-13219;
unsigned int var_7 = 1420798890U;
unsigned int var_12 = 812435270U;
unsigned int var_13 = 2380113748U;
int zero = 0;
unsigned char var_15 = (unsigned char)172;
unsigned short var_16 = (unsigned short)26834;
void init() {
}

void checksum() {
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
