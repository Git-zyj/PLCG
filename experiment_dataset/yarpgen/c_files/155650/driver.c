#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18243949467691809929ULL;
unsigned char var_7 = (unsigned char)17;
unsigned long long int var_12 = 14991832101853939411ULL;
int zero = 0;
short var_15 = (short)-2830;
signed char var_16 = (signed char)87;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
