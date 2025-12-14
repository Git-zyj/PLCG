#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -5583194687609973655LL;
signed char var_12 = (signed char)85;
long long int var_16 = 5009624707273219065LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)60;
int var_19 = -573764236;
signed char var_20 = (signed char)6;
long long int var_21 = 5901916888450048139LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
