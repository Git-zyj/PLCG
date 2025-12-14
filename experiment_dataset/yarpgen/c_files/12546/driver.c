#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 6233473686257191823ULL;
unsigned short var_10 = (unsigned short)6143;
int var_12 = -1328102134;
unsigned short var_15 = (unsigned short)11019;
int zero = 0;
unsigned long long int var_19 = 7102361393711216041ULL;
long long int var_20 = 4223368841598146993LL;
unsigned short var_21 = (unsigned short)37360;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
