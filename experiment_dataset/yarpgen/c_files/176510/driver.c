#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1726052720;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)1;
long long int var_15 = -9108869818899985035LL;
long long int var_16 = -1662620038346709442LL;
int zero = 0;
signed char var_17 = (signed char)-122;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
