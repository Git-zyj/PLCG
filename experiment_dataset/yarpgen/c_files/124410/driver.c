#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8952544966281704482LL;
_Bool var_5 = (_Bool)1;
unsigned int var_11 = 3733513103U;
int zero = 0;
short var_17 = (short)-15121;
unsigned int var_18 = 461710660U;
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
