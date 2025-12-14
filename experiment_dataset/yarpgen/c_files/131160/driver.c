#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 735588227;
unsigned long long int var_1 = 13326534081779903137ULL;
long long int var_2 = -3119922427279890221LL;
long long int var_7 = -6874375857058938858LL;
int zero = 0;
int var_16 = -233566115;
long long int var_17 = 1789222345406391699LL;
unsigned int var_18 = 856833376U;
_Bool var_19 = (_Bool)0;
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
