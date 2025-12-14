#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)10115;
unsigned int var_2 = 4258892021U;
unsigned int var_6 = 1394079024U;
long long int var_10 = 3735823642867363408LL;
signed char var_11 = (signed char)-39;
long long int var_13 = 7596659218799746804LL;
int zero = 0;
unsigned short var_14 = (unsigned short)64601;
int var_15 = -972175804;
_Bool var_16 = (_Bool)0;
int var_17 = 839367991;
short var_18 = (short)-30729;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
