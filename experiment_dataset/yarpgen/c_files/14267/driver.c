#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 794292820U;
_Bool var_3 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 16204956185468419616ULL;
signed char var_11 = (signed char)-112;
long long int var_12 = -2853708252840045904LL;
signed char var_13 = (signed char)87;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
