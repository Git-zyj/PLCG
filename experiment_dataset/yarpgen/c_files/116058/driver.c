#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3147716944U;
unsigned long long int var_1 = 6151526454133979860ULL;
unsigned long long int var_5 = 13595156995209123709ULL;
_Bool var_6 = (_Bool)1;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = 483166014;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
