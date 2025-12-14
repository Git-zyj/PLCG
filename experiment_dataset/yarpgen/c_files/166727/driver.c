#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 579404371;
long long int var_3 = 2854319014623277838LL;
long long int var_4 = 8769891397140967786LL;
unsigned long long int var_6 = 8892800779296774691ULL;
int var_11 = -1857441677;
unsigned int var_14 = 1971745969U;
int zero = 0;
unsigned short var_16 = (unsigned short)60120;
unsigned short var_17 = (unsigned short)25905;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
