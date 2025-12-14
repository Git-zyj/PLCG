#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1303354930;
_Bool var_8 = (_Bool)1;
short var_14 = (short)6925;
int zero = 0;
unsigned short var_16 = (unsigned short)57455;
long long int var_17 = 4251369235102758681LL;
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
