#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3108094018U;
short var_6 = (short)-2028;
short var_9 = (short)3860;
short var_12 = (short)-28383;
int zero = 0;
unsigned char var_15 = (unsigned char)134;
int var_16 = 45809294;
unsigned char var_17 = (unsigned char)147;
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
