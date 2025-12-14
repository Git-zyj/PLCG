#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -350014743;
int var_11 = 153110201;
long long int var_12 = 175868634182999568LL;
long long int var_15 = 723242600965433481LL;
short var_16 = (short)30630;
int zero = 0;
unsigned int var_18 = 342273352U;
unsigned long long int var_19 = 7430958284491970911ULL;
long long int var_20 = 6758958386238181188LL;
void init() {
}

void checksum() {
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
