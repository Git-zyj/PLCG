#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1710955247;
unsigned int var_4 = 184682830U;
long long int var_7 = 1587722486266624963LL;
int zero = 0;
long long int var_10 = 534879283257220725LL;
long long int var_11 = 7385639732038267718LL;
unsigned int var_12 = 33840917U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
