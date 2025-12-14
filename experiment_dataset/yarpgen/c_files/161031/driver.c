#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6295199467625556750ULL;
_Bool var_2 = (_Bool)1;
int var_3 = -542612844;
unsigned int var_4 = 3764597357U;
unsigned long long int var_6 = 9078187881641080394ULL;
unsigned long long int var_10 = 1545897174095728330ULL;
int var_11 = 1956219805;
int zero = 0;
int var_15 = -1565680462;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
