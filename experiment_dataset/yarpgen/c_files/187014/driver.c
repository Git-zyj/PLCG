#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1579092493;
unsigned long long int var_1 = 14356703940641244093ULL;
int var_2 = 790465031;
int var_3 = 2127467011;
unsigned short var_6 = (unsigned short)48138;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = 874308393;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
