#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1794394254U;
_Bool var_5 = (_Bool)0;
unsigned int var_8 = 1640087304U;
signed char var_14 = (signed char)-108;
int zero = 0;
unsigned long long int var_20 = 3080714961539972649ULL;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
int var_23 = -1603830536;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
