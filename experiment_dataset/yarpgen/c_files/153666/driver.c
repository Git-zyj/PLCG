#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
unsigned long long int var_11 = 6262082936918488937ULL;
unsigned long long int var_14 = 6498971032849155761ULL;
int zero = 0;
unsigned int var_18 = 2547010031U;
signed char var_19 = (signed char)-21;
unsigned short var_20 = (unsigned short)43667;
long long int var_21 = 5793866008691461013LL;
int var_22 = -348250874;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
