#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 329982328094823437LL;
_Bool var_4 = (_Bool)1;
unsigned char var_7 = (unsigned char)210;
unsigned int var_10 = 3737732533U;
int zero = 0;
unsigned short var_14 = (unsigned short)53990;
int var_15 = 17276667;
int var_16 = 1309235760;
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
