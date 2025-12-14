#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)56;
long long int var_6 = 364698233427521524LL;
int var_7 = 875110940;
unsigned char var_11 = (unsigned char)200;
signed char var_14 = (signed char)88;
short var_15 = (short)21142;
int zero = 0;
long long int var_16 = -1591792599529078421LL;
short var_17 = (short)-11176;
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
