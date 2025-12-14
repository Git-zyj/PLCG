#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = 1486550192;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)1683;
short var_8 = (short)-24159;
int zero = 0;
long long int var_17 = 8866190990258562263LL;
unsigned long long int var_18 = 12092932766416747094ULL;
unsigned int var_19 = 472769496U;
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
