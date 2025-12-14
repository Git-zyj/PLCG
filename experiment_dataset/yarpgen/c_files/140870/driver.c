#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_5 = 1788883220U;
unsigned long long int var_8 = 3586559029591728906ULL;
short var_13 = (short)-29605;
short var_14 = (short)-12360;
int zero = 0;
int var_15 = -1908220101;
unsigned int var_16 = 1403410558U;
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
