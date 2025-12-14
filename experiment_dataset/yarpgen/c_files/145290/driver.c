#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 721589450;
short var_2 = (short)10731;
unsigned int var_6 = 637615871U;
unsigned long long int var_7 = 14950362714036809101ULL;
_Bool var_11 = (_Bool)0;
long long int var_12 = 5769869850482920632LL;
int zero = 0;
int var_13 = 1879153805;
unsigned char var_14 = (unsigned char)16;
unsigned long long int var_15 = 4971003141208978268ULL;
unsigned char var_16 = (unsigned char)80;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
