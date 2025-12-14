#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -8868146514966955061LL;
short var_10 = (short)12724;
unsigned char var_11 = (unsigned char)47;
short var_13 = (short)242;
unsigned long long int var_17 = 2741903622347093699ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)25627;
unsigned short var_19 = (unsigned short)5766;
unsigned short var_20 = (unsigned short)33382;
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
