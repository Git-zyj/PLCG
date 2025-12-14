#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3288927226U;
long long int var_4 = 5987156426707015913LL;
long long int var_5 = 3853035604196682762LL;
unsigned int var_6 = 3470945731U;
unsigned int var_7 = 2366620387U;
unsigned int var_10 = 2652171874U;
int zero = 0;
long long int var_13 = 6885144912516421191LL;
unsigned int var_14 = 2420225793U;
unsigned int var_15 = 4187320233U;
unsigned int var_16 = 352103305U;
unsigned int var_17 = 1387008300U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
