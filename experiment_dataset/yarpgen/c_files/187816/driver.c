#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -488454885717759701LL;
unsigned int var_8 = 3863061841U;
int var_10 = -865647965;
long long int var_11 = -8738734606484742555LL;
int var_17 = -422129778;
unsigned short var_18 = (unsigned short)55562;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 2708546U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
