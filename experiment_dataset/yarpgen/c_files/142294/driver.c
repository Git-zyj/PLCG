#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2327492353U;
unsigned long long int var_1 = 13989210210393080079ULL;
short var_5 = (short)28496;
unsigned char var_7 = (unsigned char)145;
signed char var_8 = (signed char)70;
int zero = 0;
unsigned short var_14 = (unsigned short)63158;
unsigned int var_15 = 617888501U;
unsigned long long int var_16 = 1858025382541433462ULL;
signed char var_17 = (signed char)-114;
short var_18 = (short)-10189;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
