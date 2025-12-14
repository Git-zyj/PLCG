#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5359396948729824829LL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 16216778957786352766ULL;
int zero = 0;
unsigned long long int var_11 = 6193331286466163336ULL;
long long int var_12 = 7534022421506682100LL;
long long int var_13 = 7059893192699585524LL;
long long int var_14 = 5064413254379878691LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
