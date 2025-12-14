#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8035593502131137057LL;
unsigned char var_1 = (unsigned char)109;
unsigned long long int var_6 = 14083777831894310229ULL;
unsigned int var_9 = 1263148356U;
long long int var_10 = -6808717120000923175LL;
int zero = 0;
unsigned long long int var_12 = 15862644475104066232ULL;
unsigned long long int var_13 = 4613854419364653974ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
