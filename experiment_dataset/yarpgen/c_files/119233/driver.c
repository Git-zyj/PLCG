#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 1739023121723812081LL;
unsigned long long int var_9 = 9961796208208690356ULL;
unsigned int var_15 = 2252709773U;
unsigned int var_18 = 3231332193U;
unsigned long long int var_19 = 11349274186448764239ULL;
int zero = 0;
unsigned long long int var_20 = 11088407284045150316ULL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 137863380U;
int var_23 = -417762357;
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
