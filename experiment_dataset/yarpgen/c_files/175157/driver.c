#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7863506546295974828ULL;
unsigned int var_2 = 2493070873U;
unsigned int var_3 = 312676236U;
unsigned long long int var_7 = 2501918611237379426ULL;
unsigned long long int var_10 = 11131840422917370134ULL;
unsigned long long int var_11 = 15197336095090740352ULL;
unsigned long long int var_12 = 14414174925139760645ULL;
int var_13 = -692648190;
unsigned long long int var_16 = 2143888321892087778ULL;
long long int var_18 = -5929189134716831457LL;
int zero = 0;
unsigned long long int var_19 = 18067563063784530758ULL;
signed char var_20 = (signed char)-40;
unsigned long long int var_21 = 2711945059760084052ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
