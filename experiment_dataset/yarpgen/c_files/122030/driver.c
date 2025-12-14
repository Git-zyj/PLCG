#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = 1931268300;
signed char var_12 = (signed char)12;
signed char var_15 = (signed char)(-127 - 1);
int zero = 0;
short var_18 = (short)-25171;
short var_19 = (short)12454;
int var_20 = -767944155;
void init() {
}

void checksum() {
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
