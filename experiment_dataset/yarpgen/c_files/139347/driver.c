#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 11346404990053732755ULL;
int var_7 = -1529120507;
unsigned int var_8 = 586331649U;
int zero = 0;
unsigned int var_11 = 4171398058U;
signed char var_12 = (signed char)-31;
long long int var_13 = -7586670183836199114LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
