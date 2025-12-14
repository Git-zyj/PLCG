#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_10 = (_Bool)0;
unsigned short var_18 = (unsigned short)39180;
int zero = 0;
unsigned long long int var_20 = 5797747807261994110ULL;
long long int var_21 = -6663380776723778566LL;
unsigned short var_22 = (unsigned short)29682;
unsigned int var_23 = 1091542938U;
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
