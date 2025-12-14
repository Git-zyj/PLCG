#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 5249056871922252420ULL;
long long int var_6 = -6352809054916353552LL;
unsigned char var_7 = (unsigned char)156;
unsigned int var_8 = 1462980513U;
int zero = 0;
unsigned int var_10 = 3007959019U;
short var_11 = (short)-6302;
signed char var_12 = (signed char)11;
unsigned char var_13 = (unsigned char)101;
signed char var_14 = (signed char)48;
short var_15 = (short)-22899;
int var_16 = -1201816440;
unsigned int var_17 = 2691662206U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
