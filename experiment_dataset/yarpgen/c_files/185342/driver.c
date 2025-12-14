#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14429;
unsigned long long int var_2 = 9737687059106282459ULL;
long long int var_3 = 1934810489037135271LL;
signed char var_7 = (signed char)-22;
_Bool var_8 = (_Bool)0;
short var_11 = (short)-10436;
int var_12 = 149362978;
long long int var_13 = 4584010479820755688LL;
int zero = 0;
signed char var_14 = (signed char)35;
unsigned long long int var_15 = 9376415731337212539ULL;
int var_16 = -1284805731;
unsigned int var_17 = 1180834501U;
unsigned int var_18 = 26504788U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
