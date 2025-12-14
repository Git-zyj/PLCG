#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
unsigned long long int var_9 = 15121629852271168897ULL;
_Bool var_13 = (_Bool)0;
long long int var_15 = -1554151594774142673LL;
int zero = 0;
int var_16 = 1144033241;
signed char var_17 = (signed char)45;
int var_18 = 1029028907;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
