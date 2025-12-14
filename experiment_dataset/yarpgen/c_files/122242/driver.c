#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 23301569U;
_Bool var_12 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = 6750583885963712542LL;
signed char var_15 = (signed char)94;
long long int var_16 = 5183444048445389033LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
