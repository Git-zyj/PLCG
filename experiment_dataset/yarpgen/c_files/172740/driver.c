#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1429216785U;
int var_10 = 1891176194;
unsigned long long int var_12 = 5330974079439357318ULL;
short var_18 = (short)-1151;
int zero = 0;
unsigned long long int var_19 = 3137240706628892928ULL;
short var_20 = (short)31660;
int var_21 = -303849724;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
