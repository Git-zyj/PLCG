#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -31149497;
_Bool var_7 = (_Bool)0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_14 = 15433351992800152702ULL;
int zero = 0;
int var_15 = 85225112;
signed char var_16 = (signed char)96;
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
