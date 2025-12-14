#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6810;
unsigned short var_2 = (unsigned short)45916;
unsigned char var_4 = (unsigned char)15;
unsigned char var_9 = (unsigned char)107;
unsigned char var_12 = (unsigned char)154;
int zero = 0;
short var_13 = (short)27540;
unsigned long long int var_14 = 4674685792020233188ULL;
unsigned int var_15 = 1849575617U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
