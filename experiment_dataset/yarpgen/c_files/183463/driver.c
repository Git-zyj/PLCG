#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2647203686U;
int var_4 = 947263324;
long long int var_6 = 6837753680426409001LL;
int var_8 = 1134630745;
long long int var_10 = -8994330219217785133LL;
int var_11 = 145217224;
int zero = 0;
unsigned int var_13 = 2830646251U;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3804688042U;
signed char var_16 = (signed char)13;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
