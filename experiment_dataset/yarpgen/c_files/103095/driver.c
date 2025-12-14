#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1840699997U;
long long int var_2 = -7137058077989372293LL;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-20694;
unsigned int var_5 = 104564172U;
int var_7 = 935356351;
signed char var_9 = (signed char)-32;
unsigned long long int var_11 = 10273816744328428404ULL;
int zero = 0;
long long int var_12 = -2754180817075218297LL;
long long int var_13 = -3880951321721011271LL;
unsigned int var_14 = 3924779086U;
long long int var_15 = -4897991709643010114LL;
int var_16 = -1142513060;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
