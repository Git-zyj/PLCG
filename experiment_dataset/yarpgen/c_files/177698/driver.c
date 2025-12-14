#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -1115034939;
unsigned int var_2 = 3934511714U;
_Bool var_4 = (_Bool)0;
unsigned char var_8 = (unsigned char)122;
unsigned char var_9 = (unsigned char)160;
int zero = 0;
short var_11 = (short)-8223;
unsigned char var_12 = (unsigned char)250;
short var_13 = (short)15738;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
