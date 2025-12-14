#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)76;
short var_7 = (short)-17149;
signed char var_12 = (signed char)-57;
unsigned int var_13 = 716665548U;
short var_15 = (short)16968;
int zero = 0;
unsigned short var_19 = (unsigned short)36597;
signed char var_20 = (signed char)103;
void init() {
}

void checksum() {
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
