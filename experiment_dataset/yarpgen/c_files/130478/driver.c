#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)14496;
short var_3 = (short)1157;
unsigned int var_4 = 3491469524U;
unsigned int var_6 = 3249356096U;
int zero = 0;
int var_10 = 615157384;
short var_11 = (short)19614;
unsigned char var_12 = (unsigned char)237;
unsigned long long int var_13 = 11813255010528579186ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
