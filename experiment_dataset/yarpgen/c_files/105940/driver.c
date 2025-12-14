#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned int var_6 = 238470666U;
unsigned int var_8 = 3282268269U;
short var_13 = (short)23397;
long long int var_14 = -6989669413615042793LL;
int zero = 0;
unsigned int var_15 = 4258953420U;
long long int var_16 = 8427875339703902864LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
