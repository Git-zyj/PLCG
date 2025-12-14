#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4362092161093453457LL;
long long int var_10 = -2889702898089611770LL;
long long int var_11 = -4461666434672992169LL;
long long int var_15 = -2325720221489245152LL;
int zero = 0;
long long int var_18 = 2918416012689271857LL;
long long int var_19 = 8665974112387547613LL;
long long int var_20 = 7974733837588105794LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
