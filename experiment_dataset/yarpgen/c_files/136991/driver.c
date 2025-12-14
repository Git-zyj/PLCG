#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)5981;
signed char var_3 = (signed char)118;
short var_4 = (short)-5363;
short var_5 = (short)31154;
signed char var_6 = (signed char)-126;
signed char var_9 = (signed char)-24;
int zero = 0;
signed char var_15 = (signed char)-122;
signed char var_16 = (signed char)-7;
signed char var_17 = (signed char)-28;
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
