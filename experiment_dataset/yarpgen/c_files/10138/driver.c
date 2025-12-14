#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_14 = (signed char)-61;
long long int var_15 = -4769474742776965309LL;
int zero = 0;
long long int var_20 = -4607213191745863263LL;
unsigned short var_21 = (unsigned short)1091;
unsigned char var_22 = (unsigned char)190;
short var_23 = (short)232;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
