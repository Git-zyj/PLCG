#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-64;
unsigned short var_2 = (unsigned short)62542;
unsigned char var_3 = (unsigned char)69;
unsigned short var_6 = (unsigned short)29847;
unsigned int var_9 = 1802035488U;
short var_11 = (short)25221;
signed char var_12 = (signed char)96;
int zero = 0;
unsigned long long int var_14 = 15567084768494864286ULL;
long long int var_15 = 1210164850949821464LL;
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
