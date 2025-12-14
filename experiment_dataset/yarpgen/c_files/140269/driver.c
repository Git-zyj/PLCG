#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)7;
int var_2 = 578399637;
signed char var_3 = (signed char)33;
long long int var_4 = 8598942657478239886LL;
unsigned long long int var_7 = 16555248276599545379ULL;
int zero = 0;
signed char var_11 = (signed char)91;
_Bool var_12 = (_Bool)1;
long long int var_13 = 4132779971878867546LL;
signed char var_14 = (signed char)31;
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
