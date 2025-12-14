#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
short var_5 = (short)30576;
unsigned short var_8 = (unsigned short)47263;
_Bool var_9 = (_Bool)1;
int zero = 0;
short var_15 = (short)-8729;
int var_16 = -549641326;
unsigned long long int var_17 = 249203545664961816ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
