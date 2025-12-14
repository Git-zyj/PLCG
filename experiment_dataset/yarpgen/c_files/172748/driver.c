#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -508050203;
_Bool var_13 = (_Bool)0;
signed char var_15 = (signed char)78;
int zero = 0;
short var_17 = (short)-6962;
short var_18 = (short)27084;
long long int var_19 = 1012628645501551015LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
