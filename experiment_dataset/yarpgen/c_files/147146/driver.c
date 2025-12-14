#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 503498920U;
signed char var_1 = (signed char)-127;
unsigned short var_4 = (unsigned short)36446;
int var_9 = -1608461356;
unsigned char var_10 = (unsigned char)13;
int var_11 = -1066464642;
int zero = 0;
short var_16 = (short)27433;
unsigned int var_17 = 1092037323U;
unsigned long long int var_18 = 12581341507671354458ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
