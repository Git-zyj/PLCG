#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 639044504182152277LL;
unsigned long long int var_2 = 5853455116611737849ULL;
unsigned short var_5 = (unsigned short)3929;
unsigned int var_6 = 1044759684U;
short var_9 = (short)12940;
unsigned long long int var_10 = 6199445743159979570ULL;
int zero = 0;
unsigned long long int var_12 = 14120651646353159276ULL;
long long int var_13 = -32263139653897637LL;
long long int var_14 = 1144921916894614824LL;
unsigned short var_15 = (unsigned short)3127;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
