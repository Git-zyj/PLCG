#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 2243335792809608416LL;
long long int var_4 = 7355327612318522033LL;
long long int var_8 = 1043816798630480891LL;
int zero = 0;
long long int var_11 = 100907557404147641LL;
long long int var_12 = 1139114227176200466LL;
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
