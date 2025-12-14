#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57708;
long long int var_1 = -8819762932979810360LL;
short var_2 = (short)-22016;
unsigned int var_5 = 2020903358U;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 1266162311U;
int zero = 0;
unsigned int var_12 = 3947722928U;
int var_13 = -668232018;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
