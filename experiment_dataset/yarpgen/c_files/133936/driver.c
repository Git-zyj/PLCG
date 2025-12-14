#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1537753179592456188LL;
unsigned long long int var_5 = 16740286272266787864ULL;
signed char var_6 = (signed char)-79;
unsigned int var_7 = 1334438113U;
short var_12 = (short)29723;
_Bool var_13 = (_Bool)1;
int var_17 = -288862636;
int zero = 0;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)44497;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
