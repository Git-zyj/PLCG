#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)57325;
short var_5 = (short)-29262;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 2106761017U;
unsigned int var_11 = 1023904201U;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
