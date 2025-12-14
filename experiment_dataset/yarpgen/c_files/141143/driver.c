#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48095;
_Bool var_1 = (_Bool)0;
long long int var_9 = -5475984341290482353LL;
short var_13 = (short)-13499;
unsigned int var_14 = 1008980536U;
int zero = 0;
short var_15 = (short)-15360;
short var_16 = (short)6505;
int var_17 = 1515686088;
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
