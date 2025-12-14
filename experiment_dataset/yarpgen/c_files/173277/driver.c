#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2846867081286611150ULL;
_Bool var_5 = (_Bool)1;
int zero = 0;
int var_16 = -1142665517;
unsigned long long int var_17 = 4761821525733191442ULL;
long long int var_18 = -4102741416579777057LL;
void init() {
}

void checksum() {
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
