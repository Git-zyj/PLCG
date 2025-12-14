#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-26;
signed char var_9 = (signed char)-50;
unsigned short var_10 = (unsigned short)5383;
int var_12 = 94397277;
long long int var_14 = -3527959463335440557LL;
int zero = 0;
long long int var_15 = 2503773353557864675LL;
int var_16 = -16004456;
short var_17 = (short)-17798;
signed char var_18 = (signed char)95;
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
