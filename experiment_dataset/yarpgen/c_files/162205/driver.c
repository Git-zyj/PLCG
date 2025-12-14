#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4052;
long long int var_4 = 3762237811408217064LL;
int var_5 = 1926637078;
unsigned short var_9 = (unsigned short)11495;
unsigned int var_10 = 3920385391U;
int var_12 = 160910622;
long long int var_15 = -8892951408152584381LL;
int zero = 0;
signed char var_17 = (signed char)62;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-5789;
void init() {
}

void checksum() {
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
