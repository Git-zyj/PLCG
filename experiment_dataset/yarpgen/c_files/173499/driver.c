#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)20961;
int var_7 = -307581800;
long long int var_8 = -1804065382267386298LL;
int var_17 = 1993706303;
int zero = 0;
int var_20 = -1812483550;
long long int var_21 = -6061725064510433870LL;
int var_22 = 666428611;
void init() {
}

void checksum() {
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
