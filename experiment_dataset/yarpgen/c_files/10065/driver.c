#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)225;
unsigned long long int var_10 = 4013483866376403146ULL;
unsigned int var_13 = 1156016878U;
long long int var_14 = -319222337889557962LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 1933313696U;
void init() {
}

void checksum() {
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
