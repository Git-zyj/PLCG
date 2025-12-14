#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6639365602846950333LL;
unsigned long long int var_5 = 16885239541218475924ULL;
unsigned int var_12 = 346680133U;
long long int var_18 = 8871703371443392299LL;
int zero = 0;
int var_19 = -904828662;
unsigned int var_20 = 3658388801U;
void init() {
}

void checksum() {
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
