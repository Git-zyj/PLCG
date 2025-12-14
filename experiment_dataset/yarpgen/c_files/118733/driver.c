#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15265873762838825015ULL;
unsigned long long int var_1 = 1496835138010815451ULL;
unsigned short var_3 = (unsigned short)19998;
signed char var_5 = (signed char)76;
signed char var_6 = (signed char)97;
long long int var_7 = 3719075012835473770LL;
unsigned long long int var_8 = 9085945335727381989ULL;
unsigned int var_10 = 2589539732U;
int zero = 0;
unsigned long long int var_14 = 4531392822268768902ULL;
unsigned short var_15 = (unsigned short)46269;
_Bool var_16 = (_Bool)0;
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
