#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2228267161U;
_Bool var_3 = (_Bool)0;
short var_11 = (short)15139;
short var_12 = (short)7702;
int zero = 0;
unsigned short var_14 = (unsigned short)1846;
long long int var_15 = 7614232092658085173LL;
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
