#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_5 = -120595396;
unsigned char var_6 = (unsigned char)32;
long long int var_8 = -7147171105620399097LL;
_Bool var_9 = (_Bool)0;
short var_10 = (short)7644;
unsigned char var_12 = (unsigned char)29;
int zero = 0;
int var_16 = -1250662187;
short var_17 = (short)-66;
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
