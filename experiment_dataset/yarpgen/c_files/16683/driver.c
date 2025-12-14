#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3893851103672663935LL;
unsigned int var_6 = 1661954449U;
_Bool var_8 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = -3832755941145283504LL;
unsigned int var_17 = 3813803211U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
