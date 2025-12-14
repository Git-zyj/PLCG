#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = -616875570;
unsigned short var_11 = (unsigned short)18902;
short var_13 = (short)30737;
short var_14 = (short)-26821;
signed char var_15 = (signed char)-38;
int zero = 0;
unsigned long long int var_16 = 10725427809852232296ULL;
unsigned short var_17 = (unsigned short)28763;
unsigned int var_18 = 193788320U;
unsigned int var_19 = 2896048861U;
unsigned short var_20 = (unsigned short)65038;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
