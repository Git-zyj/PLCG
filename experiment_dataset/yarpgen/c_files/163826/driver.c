#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)26;
_Bool var_6 = (_Bool)0;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_18 = 3701817727708233491LL;
long long int var_19 = -5893078357673141227LL;
long long int var_20 = 6828715578859253656LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
