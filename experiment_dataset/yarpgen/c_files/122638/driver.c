#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)38032;
unsigned short var_4 = (unsigned short)1698;
int var_5 = -1222072708;
int var_8 = -538625700;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-32187;
short var_16 = (short)28306;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = -1435104473;
unsigned int var_19 = 2067661947U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
