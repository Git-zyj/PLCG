#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 880689907U;
int var_2 = 2038629008;
_Bool var_7 = (_Bool)1;
long long int var_9 = 4881300020193659764LL;
int var_12 = 2136529756;
short var_13 = (short)6324;
int var_15 = -549030191;
_Bool var_19 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 9534322159800758073ULL;
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
