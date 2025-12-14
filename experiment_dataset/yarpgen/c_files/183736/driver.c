#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_8 = 1910586278U;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)117;
signed char var_16 = (signed char)-62;
int zero = 0;
unsigned int var_18 = 356473681U;
unsigned int var_19 = 2642290319U;
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
