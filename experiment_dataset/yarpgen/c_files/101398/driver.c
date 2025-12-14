#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_7 = -1707362787;
unsigned int var_11 = 2232548803U;
long long int var_13 = 4033515085489611688LL;
unsigned int var_14 = 4254564527U;
int zero = 0;
unsigned long long int var_19 = 18131850648939907049ULL;
unsigned char var_20 = (unsigned char)182;
unsigned long long int var_21 = 17377352997488413990ULL;
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
