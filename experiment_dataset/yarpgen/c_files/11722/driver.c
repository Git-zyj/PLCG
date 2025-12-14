#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44806;
_Bool var_1 = (_Bool)0;
long long int var_7 = -7536804890895332638LL;
short var_15 = (short)16287;
short var_16 = (short)-31391;
long long int var_18 = -2760061162583357524LL;
int zero = 0;
short var_20 = (short)7965;
short var_21 = (short)2947;
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
