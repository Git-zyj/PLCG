#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_5 = -281180140;
unsigned int var_6 = 2224374582U;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 2093191550U;
_Bool var_13 = (_Bool)1;
int zero = 0;
long long int var_16 = -5854397749967120061LL;
long long int var_17 = 6704918343422589566LL;
long long int var_18 = -8602788900393284405LL;
unsigned long long int var_19 = 16831967030860987789ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
