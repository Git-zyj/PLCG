#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)160;
unsigned char var_6 = (unsigned char)131;
short var_9 = (short)-17372;
signed char var_15 = (signed char)-116;
int zero = 0;
signed char var_17 = (signed char)-53;
unsigned long long int var_18 = 4118548354234757072ULL;
short var_19 = (short)3786;
long long int var_20 = -5033907390956333295LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
