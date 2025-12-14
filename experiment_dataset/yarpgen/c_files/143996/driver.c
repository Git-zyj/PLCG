#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28360;
short var_1 = (short)29608;
short var_2 = (short)16200;
short var_3 = (short)-5409;
short var_4 = (short)-10014;
short var_5 = (short)-20520;
short var_7 = (short)-4560;
short var_8 = (short)-16856;
short var_9 = (short)-1112;
short var_10 = (short)-7555;
short var_11 = (short)-31874;
short var_12 = (short)14245;
int zero = 0;
short var_13 = (short)-19993;
short var_14 = (short)-10780;
short var_15 = (short)10271;
short var_16 = (short)-1792;
short var_17 = (short)-13065;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
