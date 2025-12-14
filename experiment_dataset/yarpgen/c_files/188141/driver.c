#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3730;
signed char var_4 = (signed char)66;
short var_7 = (short)14897;
short var_9 = (short)-30401;
signed char var_10 = (signed char)-66;
signed char var_13 = (signed char)-37;
int zero = 0;
signed char var_14 = (signed char)29;
short var_15 = (short)11362;
short var_16 = (short)19200;
short var_17 = (short)21094;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
