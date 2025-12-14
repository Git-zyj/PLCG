#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 453374138U;
_Bool var_11 = (_Bool)0;
int var_14 = 156132161;
int zero = 0;
unsigned long long int var_17 = 6182405229275259921ULL;
_Bool var_18 = (_Bool)1;
short var_19 = (short)9933;
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
