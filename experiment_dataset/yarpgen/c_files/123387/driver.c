#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4490421363654368194LL;
long long int var_4 = -1793137730409859230LL;
unsigned long long int var_5 = 13847586904756514123ULL;
unsigned long long int var_6 = 12526436842796217578ULL;
long long int var_8 = 3260819074347440635LL;
unsigned long long int var_13 = 17283077888636768643ULL;
unsigned long long int var_14 = 6433856678430937775ULL;
int zero = 0;
unsigned long long int var_15 = 1417818253917497289ULL;
int var_16 = -1532186815;
void init() {
}

void checksum() {
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
