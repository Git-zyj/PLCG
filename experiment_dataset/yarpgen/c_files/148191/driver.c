#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_13 = (signed char)-26;
signed char var_14 = (signed char)-87;
signed char var_15 = (signed char)-8;
int zero = 0;
unsigned short var_16 = (unsigned short)33611;
unsigned int var_17 = 990310934U;
long long int var_18 = 3403646547120490622LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
