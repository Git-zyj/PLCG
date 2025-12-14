#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47781;
_Bool var_3 = (_Bool)0;
_Bool var_6 = (_Bool)1;
int var_8 = 2144843329;
int var_9 = 388806472;
int var_11 = -1784338778;
int zero = 0;
short var_13 = (short)-1693;
int var_14 = -904424874;
unsigned long long int var_15 = 4333488694992025908ULL;
unsigned short var_16 = (unsigned short)62108;
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
