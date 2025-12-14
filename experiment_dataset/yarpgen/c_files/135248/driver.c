#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_3 = 2211601542535248031LL;
long long int var_4 = -1573358742991480432LL;
int var_10 = 1121238481;
long long int var_11 = -1575534075257085673LL;
long long int var_12 = 6764047318963816770LL;
unsigned long long int var_14 = 6019899271240389884ULL;
int zero = 0;
long long int var_16 = 8881033501588149039LL;
unsigned long long int var_17 = 8223061833445659754ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
