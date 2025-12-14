#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6592027659314894188LL;
unsigned int var_7 = 2206644305U;
int zero = 0;
unsigned long long int var_12 = 10657759308496670598ULL;
signed char var_13 = (signed char)-86;
short var_14 = (short)-22815;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
