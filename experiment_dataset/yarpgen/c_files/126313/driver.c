#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)80;
unsigned long long int var_7 = 13965785883172610070ULL;
int var_13 = 1161994160;
long long int var_14 = -7462527725551307604LL;
int var_15 = 245041028;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned int var_18 = 2337909085U;
unsigned int var_19 = 2823314120U;
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
