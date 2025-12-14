#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16870690578037801547ULL;
int var_2 = -2005641813;
long long int var_5 = 7001755501319777970LL;
int zero = 0;
unsigned long long int var_11 = 8065170901299027349ULL;
_Bool var_12 = (_Bool)0;
long long int var_13 = 2134325370404084446LL;
long long int var_14 = 968781753452155348LL;
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
