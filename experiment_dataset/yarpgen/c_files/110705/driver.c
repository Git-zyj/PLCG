#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13054;
short var_4 = (short)25194;
short var_5 = (short)-24893;
short var_11 = (short)-4538;
short var_12 = (short)4868;
short var_16 = (short)-22679;
int zero = 0;
short var_17 = (short)-13784;
short var_18 = (short)-10812;
short var_19 = (short)-4202;
void init() {
}

void checksum() {
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
