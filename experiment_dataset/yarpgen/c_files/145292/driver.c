#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-82;
unsigned short var_2 = (unsigned short)37838;
unsigned short var_7 = (unsigned short)30307;
int var_11 = 1772539250;
signed char var_12 = (signed char)42;
signed char var_14 = (signed char)62;
int zero = 0;
signed char var_15 = (signed char)9;
unsigned short var_16 = (unsigned short)9839;
short var_17 = (short)-8399;
void init() {
}

void checksum() {
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
