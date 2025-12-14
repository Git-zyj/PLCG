#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8019737381735570554LL;
long long int var_4 = 3186482736981383205LL;
signed char var_6 = (signed char)50;
long long int var_10 = 8470486879887895827LL;
int zero = 0;
long long int var_12 = -4162369141695443052LL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
