#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3261840854U;
_Bool var_10 = (_Bool)0;
long long int var_12 = 8889083693666326356LL;
int zero = 0;
long long int var_14 = 3377668649813936632LL;
int var_15 = -2083646791;
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
