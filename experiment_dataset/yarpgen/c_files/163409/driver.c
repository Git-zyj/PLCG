#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17749;
long long int var_8 = 1606582917578190215LL;
short var_10 = (short)-1383;
int zero = 0;
unsigned short var_13 = (unsigned short)63981;
_Bool var_14 = (_Bool)1;
long long int var_15 = -1684877933770729968LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
