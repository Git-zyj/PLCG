#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-108;
unsigned short var_12 = (unsigned short)49140;
short var_13 = (short)-15745;
short var_15 = (short)-1143;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = -6627846134936104371LL;
void init() {
}

void checksum() {
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
