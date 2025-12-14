#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 646574477361332968LL;
long long int var_2 = -5983773096075801407LL;
long long int var_4 = -4406603504758935950LL;
signed char var_6 = (signed char)-6;
unsigned char var_9 = (unsigned char)144;
unsigned int var_10 = 1691439882U;
long long int var_11 = -3231549871697958200LL;
unsigned short var_12 = (unsigned short)33537;
int zero = 0;
unsigned char var_14 = (unsigned char)149;
int var_15 = 790125805;
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
