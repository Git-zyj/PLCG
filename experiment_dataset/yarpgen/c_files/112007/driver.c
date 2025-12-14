#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_4 = 7600620989515778459LL;
unsigned int var_6 = 1437002451U;
_Bool var_8 = (_Bool)0;
long long int var_10 = 6681438958281976669LL;
int zero = 0;
unsigned short var_11 = (unsigned short)50835;
unsigned int var_12 = 1525942112U;
long long int var_13 = -3070637004533748627LL;
unsigned short var_14 = (unsigned short)44646;
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
