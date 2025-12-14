#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8404939273359436570LL;
long long int var_7 = -1682699310328511717LL;
signed char var_9 = (signed char)46;
unsigned char var_10 = (unsigned char)17;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 11078578242691645722ULL;
unsigned long long int var_13 = 6593472379670610161ULL;
long long int var_14 = 2490423450286238150LL;
unsigned int var_15 = 1214324681U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
