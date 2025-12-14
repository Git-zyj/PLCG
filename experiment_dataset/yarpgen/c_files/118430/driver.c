#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27102;
unsigned long long int var_2 = 2581960979864373217ULL;
signed char var_4 = (signed char)-92;
unsigned int var_5 = 1098760195U;
short var_6 = (short)1400;
int zero = 0;
long long int var_15 = -5805142633796953089LL;
unsigned short var_16 = (unsigned short)11043;
short var_17 = (short)-21045;
void init() {
}

void checksum() {
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
