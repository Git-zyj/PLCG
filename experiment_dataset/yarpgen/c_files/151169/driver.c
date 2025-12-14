#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 697698914;
signed char var_3 = (signed char)60;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = -5240834482397549693LL;
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
