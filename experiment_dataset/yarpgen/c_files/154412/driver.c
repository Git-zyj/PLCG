#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2589992290117992979ULL;
unsigned int var_1 = 591726569U;
unsigned short var_5 = (unsigned short)51293;
unsigned long long int var_6 = 14338781799595907740ULL;
_Bool var_9 = (_Bool)1;
_Bool var_12 = (_Bool)1;
short var_13 = (short)2050;
int zero = 0;
unsigned short var_14 = (unsigned short)48742;
unsigned short var_15 = (unsigned short)19119;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
