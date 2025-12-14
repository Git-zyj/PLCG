#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_9 = -1619982267;
_Bool var_12 = (_Bool)1;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-35;
int zero = 0;
int var_17 = -663700799;
int var_18 = 1086685569;
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
