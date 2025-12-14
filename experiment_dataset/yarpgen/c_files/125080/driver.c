#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)32477;
short var_3 = (short)30351;
short var_4 = (short)11278;
short var_5 = (short)-9296;
short var_7 = (short)1346;
short var_8 = (short)-29618;
short var_9 = (short)-19665;
int zero = 0;
short var_10 = (short)-16223;
short var_11 = (short)-22642;
short var_12 = (short)-28202;
short var_13 = (short)-282;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
