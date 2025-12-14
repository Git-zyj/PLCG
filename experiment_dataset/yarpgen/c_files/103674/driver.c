#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
short var_9 = (short)2445;
short var_11 = (short)30005;
short var_12 = (short)25264;
int var_14 = -533871610;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_20 = -838619980;
short var_21 = (short)-2410;
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
