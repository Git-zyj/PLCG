#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5282;
_Bool var_4 = (_Bool)0;
int var_6 = -899499420;
short var_8 = (short)-2531;
int zero = 0;
long long int var_10 = -1349828784025753760LL;
int var_11 = -1793084458;
unsigned int var_12 = 1057213884U;
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
