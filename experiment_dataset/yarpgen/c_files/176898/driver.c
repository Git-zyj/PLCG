#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -482053667;
short var_6 = (short)-22709;
unsigned short var_10 = (unsigned short)33210;
long long int var_11 = -2773060140665293863LL;
int zero = 0;
unsigned int var_12 = 1815886699U;
int var_13 = -1989662717;
void init() {
}

void checksum() {
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
