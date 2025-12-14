#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17919;
short var_5 = (short)2928;
short var_14 = (short)-12829;
short var_15 = (short)29762;
int zero = 0;
int var_18 = 1894038889;
int var_19 = 495021771;
int var_20 = 1514899039;
void init() {
}

void checksum() {
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
