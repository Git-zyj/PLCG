#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7956099385149424246LL;
short var_1 = (short)-23402;
_Bool var_6 = (_Bool)0;
unsigned short var_10 = (unsigned short)52095;
int var_17 = 66878948;
unsigned short var_18 = (unsigned short)32831;
_Bool var_19 = (_Bool)1;
int zero = 0;
long long int var_20 = -5994387978182716866LL;
unsigned long long int var_21 = 16716473771109517891ULL;
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
