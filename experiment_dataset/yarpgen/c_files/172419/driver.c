#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)46;
long long int var_8 = -4437110105046709366LL;
short var_11 = (short)23571;
_Bool var_14 = (_Bool)0;
unsigned long long int var_19 = 3177656709924185570ULL;
int zero = 0;
unsigned int var_20 = 2798896081U;
long long int var_21 = 5562586960509970593LL;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)119;
unsigned int var_24 = 41182706U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
