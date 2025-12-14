#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_5 = 12844670067058502521ULL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 1148464758792465912ULL;
int zero = 0;
long long int var_10 = 1279327915764971240LL;
unsigned long long int var_11 = 17313156195904841334ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
