#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8897794019888285690LL;
signed char var_1 = (signed char)(-127 - 1);
short var_8 = (short)-29778;
short var_9 = (short)-29386;
int zero = 0;
short var_10 = (short)2660;
unsigned long long int var_11 = 15489104338053488602ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
