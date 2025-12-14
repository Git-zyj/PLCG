#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 349970060;
long long int var_2 = -7748561413233591449LL;
_Bool var_3 = (_Bool)1;
short var_5 = (short)-23756;
int zero = 0;
int var_14 = 2025168113;
unsigned char var_15 = (unsigned char)145;
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
