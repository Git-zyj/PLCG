#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4457757826390016981LL;
unsigned int var_1 = 1556502152U;
_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)222;
unsigned char var_5 = (unsigned char)18;
int zero = 0;
unsigned short var_10 = (unsigned short)28065;
unsigned long long int var_11 = 9215271358891198477ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
