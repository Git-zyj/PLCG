#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10398803954511122785ULL;
long long int var_2 = -2396055353001288532LL;
int var_3 = -542145688;
signed char var_6 = (signed char)-103;
short var_7 = (short)9001;
unsigned int var_8 = 3349616829U;
unsigned long long int var_10 = 7817627848061625817ULL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)105;
long long int var_17 = -5491213260379691579LL;
unsigned int var_18 = 1116815326U;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
