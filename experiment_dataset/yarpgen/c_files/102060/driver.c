#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)146;
long long int var_5 = -4126911431446457338LL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_17 = 4070483130916539936ULL;
long long int var_18 = -1801879263630290146LL;
unsigned short var_19 = (unsigned short)51102;
int zero = 0;
unsigned int var_20 = 1418440436U;
unsigned int var_21 = 2347572831U;
void init() {
}

void checksum() {
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
