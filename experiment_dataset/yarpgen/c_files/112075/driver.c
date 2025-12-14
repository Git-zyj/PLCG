#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3835553582U;
unsigned int var_5 = 2278945329U;
unsigned int var_7 = 1224622613U;
unsigned int var_17 = 2686904536U;
int zero = 0;
unsigned int var_19 = 1909463479U;
unsigned int var_20 = 2850830555U;
unsigned int var_21 = 30402521U;
unsigned int var_22 = 728740434U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
