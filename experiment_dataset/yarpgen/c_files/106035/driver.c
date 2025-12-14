#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5880524206898628331LL;
unsigned short var_4 = (unsigned short)33695;
signed char var_6 = (signed char)81;
long long int var_7 = -5855820095280565006LL;
unsigned int var_14 = 545535231U;
int zero = 0;
unsigned short var_16 = (unsigned short)45365;
long long int var_17 = 7877264300507824151LL;
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
