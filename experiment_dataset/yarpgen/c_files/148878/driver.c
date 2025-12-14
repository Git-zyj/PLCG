#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3434070051U;
int var_2 = -1273565120;
int var_3 = -1112845189;
signed char var_7 = (signed char)-115;
int var_9 = 613121811;
short var_10 = (short)-6449;
unsigned long long int var_13 = 10009910461005000142ULL;
int zero = 0;
short var_15 = (short)4431;
unsigned char var_16 = (unsigned char)48;
int var_17 = -281732512;
short var_18 = (short)4465;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
