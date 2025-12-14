#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3487541342U;
signed char var_10 = (signed char)-48;
unsigned int var_15 = 2029736825U;
int zero = 0;
short var_17 = (short)-4282;
unsigned short var_18 = (unsigned short)31297;
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
