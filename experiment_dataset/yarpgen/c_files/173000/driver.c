#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_17 = (_Bool)1;
unsigned char var_19 = (unsigned char)242;
int zero = 0;
signed char var_20 = (signed char)-87;
long long int var_21 = -3748547925015746222LL;
long long int var_22 = -9065666363265060519LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
