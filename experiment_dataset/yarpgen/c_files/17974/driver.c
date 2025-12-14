#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)6937;
int var_3 = -1817318938;
long long int var_7 = -3934823788071812233LL;
unsigned int var_11 = 1997375971U;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = 876451859;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
