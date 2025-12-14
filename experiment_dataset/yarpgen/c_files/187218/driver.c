#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_10 = (_Bool)0;
long long int var_12 = -2646044696931782289LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = -3162095562122038990LL;
_Bool var_20 = (_Bool)0;
long long int var_21 = 4986178072750211943LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
