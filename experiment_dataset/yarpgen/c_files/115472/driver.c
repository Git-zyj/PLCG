#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47096;
unsigned long long int var_7 = 2481860300191829889ULL;
long long int var_11 = -1812161726016427004LL;
int zero = 0;
short var_13 = (short)-9485;
unsigned char var_14 = (unsigned char)233;
unsigned short var_15 = (unsigned short)43842;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
