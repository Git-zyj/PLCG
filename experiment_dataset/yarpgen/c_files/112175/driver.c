#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -2143474164;
unsigned long long int var_7 = 3232932479308610944ULL;
unsigned long long int var_9 = 4849812504648482118ULL;
long long int var_12 = -2852825267492089812LL;
int var_15 = -1681270153;
int zero = 0;
unsigned long long int var_16 = 1165032401753681066ULL;
unsigned int var_17 = 4160182188U;
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
