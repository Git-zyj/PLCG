#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-7285;
unsigned short var_2 = (unsigned short)6582;
unsigned short var_7 = (unsigned short)11092;
int var_9 = -897671043;
int zero = 0;
unsigned short var_10 = (unsigned short)159;
unsigned int var_11 = 2465252041U;
signed char var_12 = (signed char)56;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
