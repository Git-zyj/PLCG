#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)29660;
_Bool var_6 = (_Bool)1;
short var_11 = (short)-29893;
_Bool var_15 = (_Bool)1;
long long int var_17 = 6871460787697477192LL;
long long int var_18 = -7405135018546285362LL;
int var_19 = -78057106;
int zero = 0;
int var_20 = 279480210;
int var_21 = 1980314372;
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
