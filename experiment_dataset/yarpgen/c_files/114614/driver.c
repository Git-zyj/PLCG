#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)25;
_Bool var_3 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned short var_12 = (unsigned short)24167;
int zero = 0;
short var_14 = (short)-22926;
unsigned long long int var_15 = 135118548941020036ULL;
int var_16 = 1269946413;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
