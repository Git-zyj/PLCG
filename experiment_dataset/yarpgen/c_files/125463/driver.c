#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1480957566940879489LL;
int var_1 = -1029206832;
unsigned short var_2 = (unsigned short)64013;
int var_4 = -1237928120;
unsigned long long int var_8 = 1751662724507173945ULL;
int zero = 0;
unsigned int var_11 = 2565278835U;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-32130;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
