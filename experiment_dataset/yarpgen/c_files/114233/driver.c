#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
unsigned int var_14 = 3604305435U;
int zero = 0;
unsigned long long int var_20 = 12472357661268171767ULL;
unsigned int var_21 = 4089522760U;
signed char var_22 = (signed char)97;
int var_23 = -562871294;
unsigned long long int var_24 = 9265407370279808667ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
