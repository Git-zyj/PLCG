#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1783740715;
unsigned int var_7 = 1276549231U;
long long int var_9 = 7073023937494957926LL;
int zero = 0;
long long int var_15 = -5837888117879071397LL;
long long int var_16 = -1675099665383260492LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
