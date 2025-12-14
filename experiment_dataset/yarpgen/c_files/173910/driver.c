#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_2 = (unsigned short)16787;
int var_4 = 327708903;
unsigned int var_8 = 1037624703U;
unsigned short var_11 = (unsigned short)5211;
int zero = 0;
long long int var_15 = -6691321139436785208LL;
short var_16 = (short)23884;
unsigned long long int var_17 = 8652772252271900810ULL;
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
