#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 443562418393657852ULL;
long long int var_14 = 1684929988129457479LL;
unsigned int var_16 = 2351950087U;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-55;
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
