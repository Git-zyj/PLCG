#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_17 = (_Bool)1;
unsigned long long int var_19 = 3696919652613628115ULL;
int zero = 0;
long long int var_20 = -1820743565657123389LL;
_Bool var_21 = (_Bool)1;
long long int var_22 = 9215139003565988845LL;
unsigned int var_23 = 3664355044U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
