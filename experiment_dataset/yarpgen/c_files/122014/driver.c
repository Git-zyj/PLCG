#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 135698572415151022LL;
signed char var_2 = (signed char)-83;
long long int var_3 = -4011360124058163507LL;
_Bool var_4 = (_Bool)0;
int var_6 = -492564422;
short var_7 = (short)-20134;
int var_9 = 497986306;
unsigned long long int var_10 = 13140602405217227355ULL;
int var_12 = -692469028;
int zero = 0;
unsigned short var_13 = (unsigned short)46583;
unsigned short var_14 = (unsigned short)37783;
unsigned int var_15 = 2688771466U;
long long int var_16 = 6018388924258460669LL;
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
