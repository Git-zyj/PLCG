#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-28435;
int var_4 = -762451390;
unsigned int var_8 = 618843183U;
long long int var_9 = 7030723755191718380LL;
signed char var_10 = (signed char)126;
int zero = 0;
short var_12 = (short)12812;
int var_13 = -668940557;
unsigned int var_14 = 2746702338U;
int var_15 = 1485438214;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
