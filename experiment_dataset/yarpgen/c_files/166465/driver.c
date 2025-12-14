#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -3834681084510471846LL;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 839594920U;
short var_6 = (short)9291;
int zero = 0;
unsigned long long int var_14 = 7075401126459409239ULL;
unsigned long long int var_15 = 9596329414478973736ULL;
void init() {
}

void checksum() {
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
