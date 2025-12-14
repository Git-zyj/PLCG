#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)160;
unsigned char var_3 = (unsigned char)3;
int var_5 = 1062201871;
signed char var_6 = (signed char)71;
short var_8 = (short)-22836;
unsigned short var_11 = (unsigned short)1076;
unsigned long long int var_12 = 17112551388452163516ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = -1494726739273945774LL;
unsigned short var_15 = (unsigned short)49862;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
