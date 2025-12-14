#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned char var_5 = (unsigned char)10;
unsigned long long int var_6 = 11562382488701651308ULL;
unsigned long long int var_13 = 1319688530922816783ULL;
int zero = 0;
unsigned long long int var_17 = 4668466054617708843ULL;
long long int var_18 = -9139622550102846079LL;
unsigned long long int var_19 = 12892322388356649582ULL;
unsigned char var_20 = (unsigned char)91;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
