#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12942478052345707061ULL;
long long int var_2 = -6488678208104833646LL;
short var_6 = (short)-5640;
unsigned char var_11 = (unsigned char)21;
int zero = 0;
long long int var_14 = 461806021363981407LL;
unsigned int var_15 = 4196612137U;
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
