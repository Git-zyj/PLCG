#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5570785599989866239ULL;
long long int var_4 = -4641361088198213577LL;
short var_7 = (short)1604;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 800299436U;
unsigned int var_19 = 444311502U;
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
