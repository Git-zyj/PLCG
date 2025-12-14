#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)24139;
short var_6 = (short)20510;
short var_9 = (short)31140;
short var_14 = (short)17492;
int zero = 0;
short var_15 = (short)-1122;
short var_16 = (short)-15314;
short var_17 = (short)-28734;
short var_18 = (short)20171;
short var_19 = (short)-16222;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
