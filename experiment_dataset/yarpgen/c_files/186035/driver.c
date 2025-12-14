#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)43553;
_Bool var_6 = (_Bool)0;
int var_11 = 1379318634;
int var_12 = -1861019257;
int zero = 0;
unsigned char var_13 = (unsigned char)231;
signed char var_14 = (signed char)24;
void init() {
}

void checksum() {
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
