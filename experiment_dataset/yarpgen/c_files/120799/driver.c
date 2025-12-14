#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21089;
short var_1 = (short)23124;
signed char var_7 = (signed char)108;
signed char var_9 = (signed char)113;
signed char var_12 = (signed char)-108;
short var_13 = (short)-21067;
signed char var_14 = (signed char)11;
short var_17 = (short)24166;
int zero = 0;
signed char var_19 = (signed char)-59;
signed char var_20 = (signed char)115;
void init() {
}

void checksum() {
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
