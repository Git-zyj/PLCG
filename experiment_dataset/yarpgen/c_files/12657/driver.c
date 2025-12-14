#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6676634650324099608LL;
long long int var_2 = -1964593341206296484LL;
_Bool var_12 = (_Bool)0;
int var_14 = 299243832;
long long int var_15 = -8696603859873004414LL;
int zero = 0;
int var_16 = 1060400920;
unsigned char var_17 = (unsigned char)112;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
