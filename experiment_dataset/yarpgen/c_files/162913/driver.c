#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30412;
short var_3 = (short)-26408;
long long int var_7 = -4612432521948347377LL;
long long int var_11 = 1242592027283514600LL;
int zero = 0;
unsigned int var_13 = 2579285324U;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 17204277578746367526ULL;
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
