#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 6802049074536786698LL;
int var_9 = -2111370690;
int zero = 0;
unsigned int var_18 = 109777526U;
unsigned long long int var_19 = 5890648588604452174ULL;
long long int var_20 = -8822731694059770214LL;
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
