#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3462090916382703678LL;
signed char var_1 = (signed char)46;
int zero = 0;
unsigned long long int var_11 = 170046840795223833ULL;
_Bool var_12 = (_Bool)1;
long long int var_13 = 4323719045351093239LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
