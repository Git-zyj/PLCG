#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 86980245;
signed char var_8 = (signed char)66;
int var_11 = 1386001410;
signed char var_13 = (signed char)55;
int zero = 0;
short var_15 = (short)-29711;
short var_16 = (short)-12663;
int var_17 = -305936882;
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
