#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1791673553;
signed char var_10 = (signed char)110;
signed char var_11 = (signed char)120;
long long int var_13 = 4887982221671802767LL;
unsigned short var_16 = (unsigned short)56616;
int zero = 0;
unsigned int var_19 = 4125234090U;
short var_20 = (short)-32546;
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
