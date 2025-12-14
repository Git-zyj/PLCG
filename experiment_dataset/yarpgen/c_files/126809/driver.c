#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29340;
signed char var_3 = (signed char)53;
_Bool var_6 = (_Bool)0;
_Bool var_11 = (_Bool)0;
long long int var_12 = -1903370858305273328LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
int var_17 = -1173783922;
int var_18 = -849510037;
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
