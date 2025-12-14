#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-49;
signed char var_5 = (signed char)-126;
unsigned short var_11 = (unsigned short)28390;
unsigned short var_12 = (unsigned short)41288;
_Bool var_13 = (_Bool)1;
int var_15 = 95200978;
int zero = 0;
short var_16 = (short)29065;
unsigned int var_17 = 1048613425U;
void init() {
}

void checksum() {
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
