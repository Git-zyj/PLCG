#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1437037329U;
unsigned int var_10 = 2486381854U;
int var_12 = -1043657130;
int zero = 0;
unsigned long long int var_17 = 9279367462113082017ULL;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 4014344012U;
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
