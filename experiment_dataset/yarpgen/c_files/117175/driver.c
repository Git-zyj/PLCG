#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3731005012465772048LL;
unsigned short var_1 = (unsigned short)27281;
_Bool var_3 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)46532;
unsigned int var_13 = 3705696637U;
int var_14 = 325224136;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
