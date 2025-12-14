#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2214470010U;
unsigned int var_4 = 567228947U;
unsigned long long int var_12 = 16451285842123663011ULL;
int var_15 = 1561608834;
int zero = 0;
unsigned long long int var_17 = 2138981162296806469ULL;
int var_18 = 1991785963;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
