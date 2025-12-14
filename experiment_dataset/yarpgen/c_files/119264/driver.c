#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7188889956113872405LL;
long long int var_4 = -6848072213295898643LL;
unsigned char var_6 = (unsigned char)35;
unsigned char var_11 = (unsigned char)236;
unsigned long long int var_12 = 16402709777902051253ULL;
short var_14 = (short)19389;
int zero = 0;
unsigned char var_15 = (unsigned char)47;
unsigned long long int var_16 = 13080567180342815526ULL;
unsigned char var_17 = (unsigned char)13;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
