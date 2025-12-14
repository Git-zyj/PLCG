#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)10017;
unsigned char var_6 = (unsigned char)192;
unsigned char var_8 = (unsigned char)178;
signed char var_12 = (signed char)57;
int zero = 0;
int var_19 = -842206230;
long long int var_20 = -2888298772509724068LL;
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
