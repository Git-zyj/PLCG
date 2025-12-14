#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_12 = (signed char)58;
unsigned long long int var_15 = 4081639131061847550ULL;
int var_16 = 284247769;
int zero = 0;
unsigned short var_18 = (unsigned short)23711;
unsigned long long int var_19 = 8588819314838887700ULL;
unsigned long long int var_20 = 14615783565446990032ULL;
long long int var_21 = 808312300974616717LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
