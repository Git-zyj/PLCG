#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 14525665343446410256ULL;
unsigned int var_7 = 1049639280U;
signed char var_11 = (signed char)64;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 1701503464U;
void init() {
}

void checksum() {
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
