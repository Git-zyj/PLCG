#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 14911994073151457775ULL;
_Bool var_8 = (_Bool)0;
int var_15 = 920439544;
int zero = 0;
unsigned short var_17 = (unsigned short)43553;
unsigned short var_18 = (unsigned short)22223;
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
