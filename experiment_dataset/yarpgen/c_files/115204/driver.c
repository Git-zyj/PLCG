#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9860996452800005586ULL;
unsigned int var_2 = 2393578012U;
short var_6 = (short)-13941;
short var_7 = (short)-18307;
int var_8 = -40563526;
unsigned long long int var_10 = 8073478316527145895ULL;
short var_14 = (short)6937;
int zero = 0;
int var_17 = 1800263675;
short var_18 = (short)-17233;
unsigned long long int var_19 = 15087454825171629365ULL;
short var_20 = (short)-28107;
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
