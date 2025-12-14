#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 6935007812603079146LL;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
short var_15 = (short)-11653;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 1806882974111039572ULL;
unsigned long long int var_18 = 10715096350527621948ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
