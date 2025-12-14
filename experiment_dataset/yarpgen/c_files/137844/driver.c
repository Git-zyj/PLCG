#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-51;
short var_5 = (short)-648;
signed char var_8 = (signed char)96;
unsigned int var_11 = 1929583418U;
unsigned short var_13 = (unsigned short)34074;
int zero = 0;
short var_17 = (short)-3120;
short var_18 = (short)30396;
void init() {
}

void checksum() {
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
