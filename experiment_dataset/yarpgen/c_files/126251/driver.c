#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16157;
unsigned int var_3 = 2062022990U;
_Bool var_10 = (_Bool)1;
short var_12 = (short)-29313;
short var_13 = (short)-974;
unsigned long long int var_15 = 17428825085696289418ULL;
unsigned long long int var_16 = 16448689177338051412ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)48131;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
