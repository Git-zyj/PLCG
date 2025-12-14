#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5860434546449086306LL;
_Bool var_11 = (_Bool)0;
long long int var_16 = -446008767452229237LL;
int zero = 0;
int var_18 = 1208318456;
long long int var_19 = 2035894840315027765LL;
signed char var_20 = (signed char)-31;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
