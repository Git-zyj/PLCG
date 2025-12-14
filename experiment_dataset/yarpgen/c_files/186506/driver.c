#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1808400758054612113ULL;
short var_4 = (short)857;
int var_5 = -799680160;
int var_7 = -1378484539;
unsigned char var_11 = (unsigned char)10;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_20 = 2260529346778414424LL;
short var_21 = (short)28752;
unsigned long long int var_22 = 7340440863483655695ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
