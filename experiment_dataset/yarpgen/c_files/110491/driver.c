#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9506249085505743854ULL;
unsigned int var_1 = 3417568410U;
short var_3 = (short)26844;
_Bool var_4 = (_Bool)0;
unsigned long long int var_6 = 5207801683371172641ULL;
unsigned char var_7 = (unsigned char)109;
short var_8 = (short)11673;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 1673520197U;
unsigned long long int var_11 = 8611013936003986105ULL;
unsigned int var_12 = 3126181079U;
unsigned long long int var_13 = 8322026371406480875ULL;
short var_14 = (short)9210;
int zero = 0;
unsigned long long int var_15 = 13180536047355057298ULL;
unsigned short var_16 = (unsigned short)57413;
long long int var_17 = -5250033762585275636LL;
unsigned short var_18 = (unsigned short)24047;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
