#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11099890109551201580ULL;
long long int var_10 = 8550134981341597974LL;
signed char var_14 = (signed char)-36;
int zero = 0;
unsigned char var_16 = (unsigned char)148;
unsigned short var_17 = (unsigned short)45141;
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
