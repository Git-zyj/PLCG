#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 4740642189970623712ULL;
long long int var_10 = 4059825108559792832LL;
signed char var_15 = (signed char)-83;
unsigned int var_17 = 2853722376U;
int zero = 0;
long long int var_19 = 4105097139458948560LL;
signed char var_20 = (signed char)-35;
signed char var_21 = (signed char)-23;
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
