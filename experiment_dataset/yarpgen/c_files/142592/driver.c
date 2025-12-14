#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2396048060U;
short var_6 = (short)10321;
unsigned char var_10 = (unsigned char)163;
int zero = 0;
signed char var_11 = (signed char)105;
signed char var_12 = (signed char)90;
int var_13 = -1663279754;
short var_14 = (short)17808;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
