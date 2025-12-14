#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 18186752536412552361ULL;
short var_5 = (short)-22382;
short var_7 = (short)-30825;
signed char var_9 = (signed char)56;
unsigned char var_12 = (unsigned char)202;
signed char var_14 = (signed char)8;
unsigned int var_15 = 827466749U;
long long int var_16 = -1573080512715097303LL;
int zero = 0;
short var_20 = (short)28302;
unsigned long long int var_21 = 17086855886467682313ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
