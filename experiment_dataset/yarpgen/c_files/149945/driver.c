#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14259063527037081159ULL;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 1831295609U;
unsigned short var_6 = (unsigned short)6912;
short var_8 = (short)-30205;
signed char var_9 = (signed char)-18;
int zero = 0;
unsigned short var_11 = (unsigned short)51392;
unsigned long long int var_12 = 12891136623457498786ULL;
unsigned int var_13 = 233775385U;
unsigned int var_14 = 2701207840U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
