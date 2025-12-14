#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_8 = -619938025;
unsigned long long int var_11 = 14994223016306905857ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)51299;
int var_15 = 688796433;
unsigned char var_16 = (unsigned char)95;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
