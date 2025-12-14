#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_3 = -5781983283457479845LL;
_Bool var_6 = (_Bool)0;
long long int var_7 = 1843644480372682368LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_11 = (short)21401;
long long int var_12 = 7712402807477985534LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
