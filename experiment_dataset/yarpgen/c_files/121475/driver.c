#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-7295;
long long int var_4 = 2952025941266948055LL;
long long int var_5 = 7135871357727717563LL;
unsigned short var_6 = (unsigned short)37707;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 2951828640U;
long long int var_11 = 8443721288378364500LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
