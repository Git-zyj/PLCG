#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)84;
unsigned long long int var_3 = 8617648014765619497ULL;
unsigned short var_4 = (unsigned short)49172;
unsigned short var_5 = (unsigned short)55;
unsigned short var_6 = (unsigned short)13238;
signed char var_8 = (signed char)-61;
signed char var_9 = (signed char)-36;
unsigned int var_10 = 219944303U;
unsigned char var_11 = (unsigned char)96;
signed char var_12 = (signed char)86;
short var_13 = (short)20964;
unsigned char var_15 = (unsigned char)225;
int zero = 0;
unsigned short var_17 = (unsigned short)61185;
unsigned short var_18 = (unsigned short)58088;
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
