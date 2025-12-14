#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 690159885U;
unsigned int var_6 = 2216826272U;
unsigned long long int var_14 = 10824557058454688139ULL;
int zero = 0;
unsigned long long int var_17 = 17029020149171780342ULL;
unsigned long long int var_18 = 12645709223768992287ULL;
unsigned long long int var_19 = 10083328615283342062ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
