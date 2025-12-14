#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 15586388050449846836ULL;
_Bool var_5 = (_Bool)0;
long long int var_7 = 6125835625549671135LL;
long long int var_11 = 1612356660409722811LL;
int zero = 0;
long long int var_19 = 5216286360896081865LL;
unsigned int var_20 = 377829942U;
unsigned int var_21 = 4063267030U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
