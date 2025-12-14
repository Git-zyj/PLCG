#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)17123;
unsigned int var_5 = 1589647958U;
int var_9 = -2090409550;
unsigned short var_11 = (unsigned short)16990;
unsigned short var_14 = (unsigned short)40142;
short var_15 = (short)23464;
int zero = 0;
unsigned short var_16 = (unsigned short)32575;
_Bool var_17 = (_Bool)0;
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
