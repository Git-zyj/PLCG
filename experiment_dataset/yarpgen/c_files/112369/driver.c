#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)32116;
_Bool var_12 = (_Bool)1;
int var_14 = 931052937;
int zero = 0;
long long int var_15 = 2799499520130780548LL;
signed char var_16 = (signed char)99;
unsigned long long int var_17 = 15892100178324390267ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
