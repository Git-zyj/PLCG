#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_3 = 5184935797552961603LL;
long long int var_4 = 8351818200290738954LL;
unsigned int var_10 = 2446616254U;
_Bool var_12 = (_Bool)0;
long long int var_16 = -7330812608100658301LL;
long long int var_17 = -6291707853944267497LL;
int zero = 0;
long long int var_18 = 5348129905243701763LL;
unsigned short var_19 = (unsigned short)16632;
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
