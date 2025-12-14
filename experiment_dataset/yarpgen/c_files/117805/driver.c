#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2142910830;
unsigned long long int var_4 = 14548720993827478117ULL;
unsigned long long int var_5 = 17242072575757301493ULL;
unsigned char var_10 = (unsigned char)234;
long long int var_11 = 818903074467089748LL;
short var_12 = (short)13215;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = 318898567;
void init() {
}

void checksum() {
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
