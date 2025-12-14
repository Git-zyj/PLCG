#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 1675585603;
unsigned short var_2 = (unsigned short)64633;
unsigned long long int var_3 = 10949780052658689345ULL;
unsigned long long int var_4 = 10698772768763405698ULL;
short var_5 = (short)28626;
unsigned short var_6 = (unsigned short)49692;
signed char var_7 = (signed char)5;
long long int var_8 = -1997577176126865485LL;
long long int var_9 = -5907173480008245079LL;
int zero = 0;
short var_10 = (short)-8128;
signed char var_11 = (signed char)14;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
