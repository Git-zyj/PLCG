#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)55;
signed char var_13 = (signed char)54;
_Bool var_15 = (_Bool)1;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 14065208425027904575ULL;
unsigned short var_19 = (unsigned short)20736;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
