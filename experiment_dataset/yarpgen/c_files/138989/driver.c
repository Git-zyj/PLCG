#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3761644706U;
unsigned int var_2 = 3720912566U;
unsigned int var_3 = 1229978979U;
unsigned long long int var_5 = 2303921410427257739ULL;
unsigned long long int var_7 = 13245221903769866510ULL;
int var_11 = -1324158202;
unsigned long long int var_16 = 15543708906905751647ULL;
unsigned long long int var_19 = 3798364935290653481ULL;
int zero = 0;
unsigned long long int var_20 = 6869448577049320446ULL;
int var_21 = 1947406217;
void init() {
}

void checksum() {
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
