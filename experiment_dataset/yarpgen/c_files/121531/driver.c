#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1024;
short var_3 = (short)8817;
unsigned long long int var_4 = 1474132750501573378ULL;
long long int var_5 = -5496616732075769937LL;
unsigned short var_6 = (unsigned short)20041;
short var_12 = (short)-21608;
int zero = 0;
unsigned short var_13 = (unsigned short)24430;
long long int var_14 = -8685780128183600813LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
