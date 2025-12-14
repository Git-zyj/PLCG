#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 748124646U;
unsigned long long int var_2 = 6317280096605758054ULL;
short var_4 = (short)12382;
short var_6 = (short)-10119;
long long int var_10 = 1361112480212372776LL;
int zero = 0;
unsigned long long int var_15 = 745231759175179785ULL;
unsigned char var_16 = (unsigned char)114;
unsigned char var_17 = (unsigned char)45;
unsigned long long int var_18 = 12539105564881680167ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
