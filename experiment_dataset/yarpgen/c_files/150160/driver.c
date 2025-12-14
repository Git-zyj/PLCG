#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)28;
unsigned short var_4 = (unsigned short)55437;
short var_10 = (short)28243;
unsigned int var_11 = 2579472035U;
int zero = 0;
unsigned long long int var_12 = 9100473507934515638ULL;
short var_13 = (short)-1181;
unsigned int var_14 = 4219881036U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
