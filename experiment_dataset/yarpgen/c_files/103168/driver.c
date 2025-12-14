#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2108712439;
short var_10 = (short)12349;
unsigned long long int var_11 = 15870707427572235187ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)90;
short var_17 = (short)-25641;
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
