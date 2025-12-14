#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)30585;
unsigned char var_11 = (unsigned char)244;
unsigned long long int var_12 = 2622650269929608068ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)99;
long long int var_21 = 1567156146677230915LL;
long long int var_22 = -3427016122718155591LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
