#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28738;
unsigned int var_2 = 935490208U;
short var_7 = (short)15969;
unsigned short var_9 = (unsigned short)10952;
signed char var_11 = (signed char)95;
int zero = 0;
signed char var_19 = (signed char)109;
unsigned int var_20 = 1619025664U;
void init() {
}

void checksum() {
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
