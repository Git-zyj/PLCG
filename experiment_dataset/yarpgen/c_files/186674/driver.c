#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -300448110;
short var_3 = (short)31011;
int var_6 = -1016445701;
short var_7 = (short)-22623;
signed char var_11 = (signed char)-99;
int zero = 0;
long long int var_14 = 5262385053207843357LL;
unsigned char var_15 = (unsigned char)69;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
