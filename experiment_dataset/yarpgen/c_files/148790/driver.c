#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)0;
signed char var_6 = (signed char)13;
int var_8 = -1178753837;
short var_11 = (short)-25640;
signed char var_13 = (signed char)16;
int zero = 0;
int var_14 = -336755531;
unsigned char var_15 = (unsigned char)250;
short var_16 = (short)26251;
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
