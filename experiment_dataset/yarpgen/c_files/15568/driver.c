#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3459863776U;
short var_3 = (short)-17872;
int var_5 = 444946469;
signed char var_10 = (signed char)-89;
short var_11 = (short)-20433;
signed char var_16 = (signed char)-76;
int zero = 0;
unsigned int var_17 = 780703333U;
int var_18 = -518634367;
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
