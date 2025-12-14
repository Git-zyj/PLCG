#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -637266134;
long long int var_5 = -6452085868161970282LL;
int var_10 = -1330302453;
unsigned long long int var_14 = 6654459498249385466ULL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3630312192U;
unsigned int var_19 = 2938460607U;
short var_20 = (short)-19229;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
