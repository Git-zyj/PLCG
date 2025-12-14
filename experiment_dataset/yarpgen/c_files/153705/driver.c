#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -3026173101794880805LL;
long long int var_7 = 5846587371109297689LL;
long long int var_11 = -1611910659144631810LL;
unsigned long long int var_12 = 8627690867858215220ULL;
unsigned long long int var_15 = 15687845075540176668ULL;
int zero = 0;
long long int var_17 = 2504708289706495125LL;
long long int var_18 = 5864033567080576189LL;
long long int var_19 = -6080431592288400122LL;
unsigned long long int var_20 = 14181356132475704208ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
