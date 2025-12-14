#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1595147562;
long long int var_6 = 486225582737420918LL;
short var_8 = (short)3287;
signed char var_10 = (signed char)-119;
int zero = 0;
unsigned char var_11 = (unsigned char)240;
unsigned int var_12 = 2568818230U;
signed char var_13 = (signed char)8;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
