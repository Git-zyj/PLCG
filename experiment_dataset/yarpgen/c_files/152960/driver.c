#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)31968;
signed char var_15 = (signed char)-16;
unsigned short var_17 = (unsigned short)36945;
unsigned short var_18 = (unsigned short)27138;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = 1741753762740648832LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
