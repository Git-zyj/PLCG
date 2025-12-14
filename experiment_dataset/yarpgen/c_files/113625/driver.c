#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)32;
short var_2 = (short)-18469;
unsigned short var_3 = (unsigned short)9531;
unsigned int var_4 = 250584096U;
int var_5 = 1950372626;
long long int var_8 = -7494517191405384104LL;
int var_11 = -436032346;
int var_12 = -398038177;
int zero = 0;
int var_13 = 1994304742;
int var_14 = -335766382;
long long int var_15 = -4638900356591523754LL;
int var_16 = -1052926003;
unsigned short var_17 = (unsigned short)4569;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
