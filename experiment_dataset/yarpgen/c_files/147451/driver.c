#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -986489450;
unsigned int var_9 = 1187137223U;
_Bool var_10 = (_Bool)1;
int var_12 = -370591779;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_16 = (unsigned char)31;
long long int var_17 = 7813200617764988479LL;
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
