#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2000991974U;
unsigned long long int var_4 = 16369428737992431217ULL;
long long int var_6 = -6008084592137385664LL;
short var_9 = (short)12188;
signed char var_12 = (signed char)97;
short var_13 = (short)-32497;
int zero = 0;
int var_15 = 514548373;
short var_16 = (short)-4133;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
