#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16109208254554118798ULL;
unsigned long long int var_1 = 17185115594480889305ULL;
int var_3 = -134013720;
long long int var_5 = -9142252297956998106LL;
int var_8 = -1345780530;
unsigned long long int var_9 = 6688218294711638865ULL;
unsigned int var_11 = 3264495323U;
int zero = 0;
unsigned int var_14 = 1094913462U;
unsigned char var_15 = (unsigned char)221;
long long int var_16 = -585948093376851080LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
