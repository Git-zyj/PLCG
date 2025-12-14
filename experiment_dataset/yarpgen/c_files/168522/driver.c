#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2238832585U;
int var_8 = 1833613992;
int var_9 = -1622200979;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)30132;
unsigned int var_19 = 1216855872U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
