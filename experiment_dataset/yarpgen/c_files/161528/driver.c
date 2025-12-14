#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)118;
signed char var_5 = (signed char)96;
unsigned long long int var_14 = 12425271753987422496ULL;
int zero = 0;
signed char var_19 = (signed char)51;
unsigned long long int var_20 = 5076391049048948175ULL;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)211;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
