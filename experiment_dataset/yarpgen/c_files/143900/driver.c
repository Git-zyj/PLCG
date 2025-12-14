#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 664803903870213090ULL;
unsigned int var_1 = 1738989928U;
short var_3 = (short)-3429;
int var_5 = 957228594;
int var_11 = -757751479;
signed char var_13 = (signed char)92;
int zero = 0;
unsigned long long int var_14 = 15482705718971877612ULL;
int var_15 = -55742069;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
