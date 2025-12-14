#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 500082130U;
_Bool var_7 = (_Bool)0;
long long int var_10 = 2795389622026112243LL;
int zero = 0;
unsigned int var_13 = 3510616500U;
long long int var_14 = -4228135683429698991LL;
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
