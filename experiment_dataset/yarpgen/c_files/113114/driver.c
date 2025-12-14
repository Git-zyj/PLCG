#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8872554464444095766LL;
unsigned char var_1 = (unsigned char)134;
int var_4 = -187000853;
int var_5 = 870090011;
_Bool var_6 = (_Bool)0;
short var_7 = (short)2001;
int zero = 0;
unsigned long long int var_10 = 14869159573836135823ULL;
long long int var_11 = -991542340635594865LL;
long long int var_12 = -567128128048077495LL;
long long int var_13 = 1953093391283873931LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
