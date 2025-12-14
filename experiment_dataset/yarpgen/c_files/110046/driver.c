#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-2280;
unsigned short var_10 = (unsigned short)7577;
unsigned short var_16 = (unsigned short)19499;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = 7401417313241944527LL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 762618750U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
