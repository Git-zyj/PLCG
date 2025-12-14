#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)124;
unsigned short var_3 = (unsigned short)37;
int var_5 = 778925240;
int var_6 = 1704901041;
int var_7 = 66238812;
unsigned long long int var_13 = 9363366000527321457ULL;
long long int var_16 = 3646291438556028140LL;
int zero = 0;
long long int var_17 = -6966616987670668387LL;
unsigned long long int var_18 = 7897016095678300624ULL;
signed char var_19 = (signed char)-52;
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
