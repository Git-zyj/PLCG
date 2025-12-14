#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 360182344;
int var_2 = -1266906244;
int var_5 = 1325953712;
short var_7 = (short)-13042;
short var_9 = (short)22867;
int var_12 = -367598564;
int zero = 0;
short var_15 = (short)12442;
int var_16 = -2004787250;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
