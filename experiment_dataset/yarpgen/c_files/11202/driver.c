#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1560363494;
unsigned long long int var_9 = 5936427076480249720ULL;
unsigned int var_13 = 1920413867U;
long long int var_14 = -546199294200441570LL;
long long int var_15 = -5815994386795312225LL;
long long int var_16 = -2898523699078755157LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
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
