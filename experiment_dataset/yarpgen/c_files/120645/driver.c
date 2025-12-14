#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2995414588U;
long long int var_2 = 3864294271013428360LL;
unsigned long long int var_4 = 10812990168219408192ULL;
short var_8 = (short)-23705;
int var_9 = -558809799;
unsigned char var_10 = (unsigned char)169;
signed char var_14 = (signed char)87;
unsigned int var_15 = 3623059280U;
int zero = 0;
signed char var_17 = (signed char)30;
long long int var_18 = -3990212340942016153LL;
unsigned short var_19 = (unsigned short)37704;
short var_20 = (short)18670;
void init() {
}

void checksum() {
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
