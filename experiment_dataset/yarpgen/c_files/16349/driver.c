#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11454;
short var_3 = (short)-8400;
int var_10 = 1401602778;
long long int var_14 = -7360341181964393599LL;
unsigned short var_16 = (unsigned short)40;
int zero = 0;
short var_19 = (short)-324;
unsigned int var_20 = 1663451874U;
int var_21 = -1829034794;
unsigned short var_22 = (unsigned short)42091;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
