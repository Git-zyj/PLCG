#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)12672;
unsigned char var_8 = (unsigned char)93;
int var_11 = -1776262306;
int zero = 0;
unsigned char var_18 = (unsigned char)20;
long long int var_19 = -526866299913153958LL;
long long int var_20 = -1240083520477793939LL;
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
