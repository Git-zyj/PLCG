#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7356;
short var_1 = (short)29269;
short var_3 = (short)-20810;
short var_4 = (short)-22809;
unsigned int var_6 = 2742750851U;
unsigned int var_7 = 1236812396U;
int var_9 = 218732110;
unsigned int var_10 = 449759267U;
unsigned int var_12 = 917342376U;
short var_14 = (short)-28523;
short var_15 = (short)25784;
int zero = 0;
int var_17 = -806379022;
signed char var_18 = (signed char)32;
short var_19 = (short)-21383;
short var_20 = (short)15601;
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
