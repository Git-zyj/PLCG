#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 327836867U;
long long int var_2 = -4454344185342751909LL;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 1437352592U;
unsigned int var_6 = 3995898447U;
long long int var_7 = 3342219671106760668LL;
unsigned int var_8 = 399023122U;
int zero = 0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
long long int var_12 = 5340535782223970043LL;
unsigned int var_13 = 2132853060U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
