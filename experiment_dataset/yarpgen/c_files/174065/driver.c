#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25379;
short var_1 = (short)-3020;
short var_2 = (short)-28302;
short var_3 = (short)-1258;
short var_4 = (short)3686;
short var_5 = (short)-7608;
short var_6 = (short)-32613;
short var_9 = (short)-14405;
int zero = 0;
short var_10 = (short)5388;
short var_11 = (short)8036;
short var_12 = (short)-10248;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
