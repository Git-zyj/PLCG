#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30131;
short var_1 = (short)-22363;
short var_2 = (short)-26091;
short var_3 = (short)-16195;
short var_6 = (short)523;
short var_7 = (short)17928;
short var_8 = (short)31850;
short var_11 = (short)-8923;
short var_13 = (short)-21097;
unsigned int var_15 = 3239793919U;
short var_16 = (short)29304;
int zero = 0;
short var_17 = (short)-4470;
short var_18 = (short)11393;
short var_19 = (short)26301;
short var_20 = (short)-9957;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
