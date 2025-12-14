#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_2 = (short)7099;
unsigned char var_4 = (unsigned char)144;
int var_8 = -1489609127;
int zero = 0;
int var_15 = 535665481;
signed char var_16 = (signed char)121;
_Bool var_17 = (_Bool)0;
int var_18 = -673304384;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
