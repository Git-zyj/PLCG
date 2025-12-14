#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17929366528386314828ULL;
int var_5 = 1168309243;
_Bool var_10 = (_Bool)0;
int zero = 0;
int var_15 = 1178890113;
long long int var_16 = 8110846197838976942LL;
long long int var_17 = -7093435001536287955LL;
unsigned long long int var_18 = 16353679965837848291ULL;
void init() {
}

void checksum() {
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
