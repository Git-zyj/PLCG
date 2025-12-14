#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1901634939;
unsigned short var_3 = (unsigned short)59494;
int var_6 = -897891534;
short var_7 = (short)11577;
signed char var_9 = (signed char)95;
int var_12 = -1703164824;
short var_16 = (short)-32087;
int zero = 0;
short var_18 = (short)-18235;
short var_19 = (short)-1531;
unsigned long long int var_20 = 18376251993768536480ULL;
signed char var_21 = (signed char)80;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
