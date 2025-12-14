#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 304071685;
long long int var_7 = -498675037477729883LL;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)85;
signed char var_13 = (signed char)-59;
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
