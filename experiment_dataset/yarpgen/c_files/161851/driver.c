#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2183039384046895484ULL;
long long int var_1 = -9106806656375250151LL;
unsigned int var_5 = 2043108518U;
unsigned int var_7 = 1833890359U;
_Bool var_9 = (_Bool)1;
signed char var_12 = (signed char)16;
unsigned char var_13 = (unsigned char)191;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
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
