#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3717714995U;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
short var_12 = (short)16540;
int zero = 0;
long long int var_14 = 4144074777519276120LL;
unsigned long long int var_15 = 4601475730271823622ULL;
unsigned int var_16 = 641346206U;
void init() {
}

void checksum() {
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
