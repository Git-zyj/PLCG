#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1026830006U;
short var_4 = (short)-29434;
unsigned char var_6 = (unsigned char)74;
int var_10 = 1745317486;
int zero = 0;
long long int var_11 = -8881515098057539636LL;
unsigned short var_12 = (unsigned short)38274;
void init() {
}

void checksum() {
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
