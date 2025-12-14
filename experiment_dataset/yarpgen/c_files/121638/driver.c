#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -224596894;
long long int var_7 = 5380192793762638111LL;
unsigned long long int var_8 = 10162575893763982157ULL;
int var_9 = 1690021668;
unsigned short var_10 = (unsigned short)38379;
signed char var_13 = (signed char)26;
int zero = 0;
signed char var_14 = (signed char)30;
unsigned char var_15 = (unsigned char)245;
signed char var_16 = (signed char)77;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
