#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8779460186358106917ULL;
short var_3 = (short)-17912;
unsigned long long int var_4 = 1611445422753306593ULL;
unsigned char var_6 = (unsigned char)22;
short var_10 = (short)-9386;
int zero = 0;
unsigned int var_11 = 2982095050U;
long long int var_12 = -6858221742916348716LL;
short var_13 = (short)-2828;
unsigned long long int var_14 = 9342191895716290903ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
