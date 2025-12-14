#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1867942790495915148ULL;
int var_1 = 1550297967;
int var_8 = 860693922;
short var_9 = (short)-3235;
short var_10 = (short)-8852;
int zero = 0;
short var_12 = (short)12559;
signed char var_13 = (signed char)24;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
