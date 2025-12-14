#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)69;
unsigned long long int var_7 = 8340899665278748865ULL;
long long int var_8 = 7733270424299408950LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 5910933943305393619ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
