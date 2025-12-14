#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)53436;
unsigned int var_3 = 3977569868U;
unsigned char var_7 = (unsigned char)231;
signed char var_8 = (signed char)109;
short var_13 = (short)-22992;
int zero = 0;
unsigned short var_14 = (unsigned short)9571;
_Bool var_15 = (_Bool)1;
short var_16 = (short)1849;
int var_17 = -816508762;
void init() {
}

void checksum() {
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
