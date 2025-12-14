#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-32;
short var_5 = (short)23514;
_Bool var_7 = (_Bool)1;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_14 = -8002999341212665253LL;
unsigned char var_15 = (unsigned char)8;
short var_16 = (short)4298;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
