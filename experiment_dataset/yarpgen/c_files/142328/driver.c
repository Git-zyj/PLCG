#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_3 = (unsigned short)9825;
unsigned long long int var_4 = 623227881549863146ULL;
unsigned long long int var_6 = 4395292085950107721ULL;
unsigned short var_8 = (unsigned short)10328;
signed char var_14 = (signed char)-88;
int zero = 0;
long long int var_20 = -4655393670470407553LL;
unsigned short var_21 = (unsigned short)42593;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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
