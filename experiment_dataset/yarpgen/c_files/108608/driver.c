#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)31608;
unsigned int var_3 = 1772788807U;
unsigned int var_11 = 617991733U;
int var_13 = -1667321135;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_20 = -7186495175430273200LL;
unsigned int var_21 = 2798617099U;
void init() {
}

void checksum() {
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
