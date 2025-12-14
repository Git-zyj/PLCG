#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 12103797289456742644ULL;
signed char var_6 = (signed char)73;
long long int var_8 = 2557076308205662491LL;
short var_10 = (short)-16079;
int zero = 0;
short var_16 = (short)13459;
unsigned int var_17 = 1579588875U;
void init() {
}

void checksum() {
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
