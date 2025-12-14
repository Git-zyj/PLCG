#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9841;
unsigned int var_5 = 2098716906U;
short var_8 = (short)18116;
long long int var_14 = -1184890850057560204LL;
unsigned long long int var_15 = 4707450747651557279ULL;
unsigned char var_16 = (unsigned char)78;
int zero = 0;
unsigned int var_20 = 1375695469U;
unsigned char var_21 = (unsigned char)45;
int var_22 = -1678099570;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
