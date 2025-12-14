#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)134;
unsigned short var_1 = (unsigned short)6281;
long long int var_4 = 5437824928339080021LL;
long long int var_11 = -7213463478852896028LL;
int zero = 0;
unsigned int var_12 = 1164531364U;
unsigned int var_13 = 1692593496U;
_Bool var_14 = (_Bool)0;
short var_15 = (short)25936;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
