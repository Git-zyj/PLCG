#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32059;
short var_3 = (short)-24966;
unsigned int var_4 = 93540148U;
short var_5 = (short)21572;
unsigned int var_7 = 4172251915U;
unsigned int var_8 = 970650725U;
short var_10 = (short)29413;
short var_13 = (short)15229;
int zero = 0;
short var_15 = (short)26226;
short var_16 = (short)25498;
unsigned int var_17 = 3623235431U;
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
