#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -160992925;
unsigned long long int var_10 = 9505747606650275370ULL;
unsigned long long int var_11 = 12560880141658893508ULL;
int var_14 = -1166914003;
int zero = 0;
unsigned long long int var_17 = 7997386410617177171ULL;
short var_18 = (short)27365;
short var_19 = (short)24003;
short var_20 = (short)-24752;
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
