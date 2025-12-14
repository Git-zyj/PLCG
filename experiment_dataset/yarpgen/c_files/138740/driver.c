#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6459993792713246573ULL;
long long int var_3 = -8103703588527257665LL;
unsigned int var_7 = 1021863128U;
short var_8 = (short)26526;
signed char var_9 = (signed char)45;
unsigned long long int var_12 = 2430288029128057842ULL;
int zero = 0;
unsigned int var_16 = 2857540033U;
unsigned short var_17 = (unsigned short)14553;
short var_18 = (short)-202;
unsigned long long int var_19 = 13090722373770430719ULL;
unsigned int var_20 = 3408956799U;
void init() {
}

void checksum() {
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
