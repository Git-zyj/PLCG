#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)80;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-71;
signed char var_13 = (signed char)-44;
unsigned long long int var_14 = 10698913546112918556ULL;
int zero = 0;
unsigned int var_17 = 2734029762U;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
