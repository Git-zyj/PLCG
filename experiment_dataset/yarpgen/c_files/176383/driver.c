#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_11 = (_Bool)0;
int var_16 = -890167252;
unsigned long long int var_18 = 6094333063774627743ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 12681039396585411931ULL;
long long int var_21 = 8528021131639650227LL;
short var_22 = (short)-17960;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
