#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14724147104345997082ULL;
long long int var_3 = 7932538365941028165LL;
unsigned long long int var_5 = 401977531176433159ULL;
int zero = 0;
int var_12 = 711886954;
long long int var_13 = -6309452479291227453LL;
unsigned long long int var_14 = 5311675851868528460ULL;
void init() {
}

void checksum() {
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
