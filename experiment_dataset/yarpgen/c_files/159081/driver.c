#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9486244560919142868ULL;
long long int var_3 = -2089266261259364793LL;
_Bool var_4 = (_Bool)0;
int var_5 = -796580088;
long long int var_9 = -1661901737364648333LL;
unsigned long long int var_11 = 5595264408870029941ULL;
unsigned short var_12 = (unsigned short)48359;
signed char var_14 = (signed char)109;
int zero = 0;
signed char var_16 = (signed char)-96;
unsigned long long int var_17 = 11553432150532230556ULL;
unsigned short var_18 = (unsigned short)42981;
void init() {
}

void checksum() {
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
