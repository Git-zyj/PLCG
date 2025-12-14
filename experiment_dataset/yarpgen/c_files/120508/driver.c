#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2928081538859146686ULL;
long long int var_6 = -3264845007101942607LL;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-17;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)71;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
