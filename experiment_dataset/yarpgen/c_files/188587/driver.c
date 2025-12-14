#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)19;
unsigned long long int var_3 = 15619872184750831096ULL;
signed char var_5 = (signed char)5;
long long int var_6 = -781243534475426875LL;
signed char var_7 = (signed char)57;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = 3103823258154448295LL;
unsigned int var_13 = 1646714743U;
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
