#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned long long int var_7 = 14591024178703259303ULL;
signed char var_8 = (signed char)53;
unsigned char var_9 = (unsigned char)93;
int zero = 0;
unsigned char var_10 = (unsigned char)224;
unsigned char var_11 = (unsigned char)134;
short var_12 = (short)32364;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
