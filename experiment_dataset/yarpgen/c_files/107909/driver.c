#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2971781470U;
unsigned char var_1 = (unsigned char)0;
unsigned char var_4 = (unsigned char)128;
unsigned short var_8 = (unsigned short)30962;
unsigned char var_10 = (unsigned char)74;
unsigned short var_11 = (unsigned short)28980;
long long int var_12 = 2010596816325432178LL;
unsigned char var_13 = (unsigned char)111;
int zero = 0;
unsigned long long int var_14 = 13125284143479476177ULL;
signed char var_15 = (signed char)22;
unsigned char var_16 = (unsigned char)56;
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
