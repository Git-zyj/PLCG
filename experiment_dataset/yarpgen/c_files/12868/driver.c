#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -542590345;
unsigned char var_1 = (unsigned char)155;
unsigned short var_3 = (unsigned short)34601;
_Bool var_5 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)29116;
short var_17 = (short)8732;
void init() {
}

void checksum() {
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
