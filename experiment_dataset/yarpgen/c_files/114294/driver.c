#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18438;
signed char var_10 = (signed char)91;
unsigned short var_11 = (unsigned short)44114;
int zero = 0;
unsigned long long int var_13 = 1663673761851359394ULL;
unsigned short var_14 = (unsigned short)42932;
short var_15 = (short)5755;
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
