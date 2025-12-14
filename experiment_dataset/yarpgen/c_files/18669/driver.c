#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8180454105777482487LL;
signed char var_1 = (signed char)-95;
signed char var_4 = (signed char)-88;
short var_6 = (short)-17584;
short var_9 = (short)-4276;
int zero = 0;
unsigned long long int var_15 = 17655162329949131673ULL;
short var_16 = (short)-15777;
unsigned long long int var_17 = 16469296929085274954ULL;
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
