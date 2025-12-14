#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 73372358U;
unsigned int var_4 = 2105801643U;
long long int var_6 = 3084796538139150210LL;
unsigned long long int var_7 = 12979185938646492762ULL;
_Bool var_8 = (_Bool)0;
int zero = 0;
short var_10 = (short)6329;
unsigned long long int var_11 = 3287649163746598865ULL;
int var_12 = 1419985866;
long long int var_13 = 4384807486046196051LL;
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
