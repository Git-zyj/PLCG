#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_4 = -4800074377070742234LL;
int var_8 = -877435623;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 11176604575187685308ULL;
unsigned long long int var_13 = 5486224029639462399ULL;
unsigned short var_14 = (unsigned short)63828;
int zero = 0;
unsigned int var_19 = 150559226U;
unsigned char var_20 = (unsigned char)199;
unsigned short var_21 = (unsigned short)63388;
unsigned short var_22 = (unsigned short)10687;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
