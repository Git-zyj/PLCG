#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2777940447U;
long long int var_2 = 972814123081400575LL;
short var_3 = (short)-6098;
long long int var_4 = -1492312840218561181LL;
unsigned char var_7 = (unsigned char)64;
unsigned long long int var_9 = 11631811089301854624ULL;
short var_12 = (short)-4337;
int zero = 0;
unsigned char var_13 = (unsigned char)201;
unsigned short var_14 = (unsigned short)33414;
short var_15 = (short)21533;
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
