#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_9 = 1655079589;
unsigned short var_10 = (unsigned short)979;
unsigned long long int var_14 = 15516113432078838915ULL;
unsigned short var_15 = (unsigned short)644;
int zero = 0;
int var_17 = -1316674636;
int var_18 = 404854289;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
