#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2086366707;
_Bool var_4 = (_Bool)1;
long long int var_5 = 2849601306351437824LL;
unsigned long long int var_6 = 6242282085238184854ULL;
signed char var_7 = (signed char)86;
unsigned long long int var_9 = 8176893826199273558ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -1746786035853131468LL;
long long int var_12 = -6612976928677886886LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
