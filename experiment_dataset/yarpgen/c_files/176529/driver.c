#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2518169698795765266ULL;
signed char var_1 = (signed char)87;
short var_4 = (short)-18122;
unsigned char var_6 = (unsigned char)193;
int var_7 = 1878022494;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)215;
unsigned char var_11 = (unsigned char)229;
unsigned char var_12 = (unsigned char)31;
int zero = 0;
int var_13 = -1512435428;
unsigned long long int var_14 = 4753243424321477012ULL;
unsigned long long int var_15 = 16916088939146118553ULL;
int var_16 = -243886395;
unsigned long long int var_17 = 12600002086063465463ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
