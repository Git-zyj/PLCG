#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4260816689411318745LL;
long long int var_6 = 8759891988987586515LL;
long long int var_12 = -3332798559257062141LL;
long long int var_13 = -7865334223842678672LL;
unsigned int var_14 = 3360943158U;
signed char var_16 = (signed char)43;
unsigned long long int var_17 = 3221962086883246328ULL;
int zero = 0;
int var_19 = 1400873026;
unsigned long long int var_20 = 9666256191732397601ULL;
long long int var_21 = 5128244429645150096LL;
signed char var_22 = (signed char)30;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
