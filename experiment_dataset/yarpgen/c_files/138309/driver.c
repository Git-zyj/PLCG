#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -1905897656;
int var_3 = 1061777836;
unsigned char var_4 = (unsigned char)136;
unsigned long long int var_11 = 1228478816504019100ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = -2629026841720471459LL;
unsigned char var_17 = (unsigned char)84;
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
