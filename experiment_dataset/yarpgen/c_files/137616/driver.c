#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-31301;
long long int var_8 = 1391617663660138839LL;
_Bool var_12 = (_Bool)1;
int var_13 = -162245619;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)10360;
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
