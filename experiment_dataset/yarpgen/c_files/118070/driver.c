#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -5614666618363807384LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)8992;
int var_18 = 394383646;
unsigned long long int var_19 = 14892220605552616340ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
