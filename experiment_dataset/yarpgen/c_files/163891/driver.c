#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)96;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)123;
signed char var_11 = (signed char)-57;
int zero = 0;
signed char var_15 = (signed char)51;
signed char var_16 = (signed char)-117;
void init() {
}

void checksum() {
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
