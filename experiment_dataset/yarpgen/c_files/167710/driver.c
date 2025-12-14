#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1401749418U;
short var_4 = (short)-17494;
signed char var_5 = (signed char)88;
signed char var_6 = (signed char)(-127 - 1);
signed char var_7 = (signed char)-48;
unsigned int var_8 = 2661786136U;
signed char var_9 = (signed char)120;
signed char var_10 = (signed char)-31;
signed char var_14 = (signed char)31;
int zero = 0;
short var_15 = (short)15934;
signed char var_16 = (signed char)-115;
short var_17 = (short)25479;
short var_18 = (short)10301;
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
