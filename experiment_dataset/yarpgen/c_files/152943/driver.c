#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4849;
short var_2 = (short)-8865;
unsigned short var_3 = (unsigned short)6984;
unsigned int var_5 = 2812915441U;
long long int var_7 = -7859547352394654553LL;
long long int var_8 = -8264543991075958256LL;
signed char var_11 = (signed char)57;
int zero = 0;
unsigned int var_12 = 3526065910U;
unsigned short var_13 = (unsigned short)32274;
long long int var_14 = 8891837375805259401LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
