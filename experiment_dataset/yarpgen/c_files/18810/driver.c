#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)42315;
_Bool var_7 = (_Bool)0;
unsigned long long int var_11 = 7127240318552602150ULL;
int zero = 0;
int var_18 = -2076269262;
int var_19 = 1654748078;
long long int var_20 = 7107321475753582128LL;
long long int var_21 = 6612100413748683507LL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
