#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9545526570086131408ULL;
unsigned long long int var_1 = 5183361266542823909ULL;
short var_3 = (short)18447;
unsigned long long int var_4 = 14690951388140286319ULL;
signed char var_7 = (signed char)45;
unsigned long long int var_9 = 11386236582870283360ULL;
unsigned char var_10 = (unsigned char)106;
short var_13 = (short)-17186;
int zero = 0;
unsigned char var_15 = (unsigned char)120;
unsigned char var_16 = (unsigned char)123;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
