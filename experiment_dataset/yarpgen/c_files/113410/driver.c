#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_7 = (unsigned short)48395;
unsigned short var_8 = (unsigned short)31468;
unsigned long long int var_11 = 13915486144450506316ULL;
int zero = 0;
signed char var_15 = (signed char)-8;
unsigned short var_16 = (unsigned short)17861;
unsigned short var_17 = (unsigned short)2302;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
