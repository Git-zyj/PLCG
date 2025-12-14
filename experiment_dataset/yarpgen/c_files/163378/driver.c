#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)7696;
short var_6 = (short)14026;
int var_17 = 2000021878;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3469115890U;
unsigned int var_20 = 2832037366U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
