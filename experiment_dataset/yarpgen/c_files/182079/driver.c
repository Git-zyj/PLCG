#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -1907317688;
unsigned long long int var_11 = 6166359047807180555ULL;
long long int var_13 = 4492979898745204897LL;
int zero = 0;
unsigned int var_14 = 2008111858U;
long long int var_15 = -7475491817836611620LL;
void init() {
}

void checksum() {
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
