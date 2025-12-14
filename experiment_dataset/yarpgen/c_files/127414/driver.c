#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
short var_5 = (short)-1041;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
long long int var_11 = -1674224700487913062LL;
long long int var_13 = -4688987270468518472LL;
unsigned char var_14 = (unsigned char)233;
int zero = 0;
unsigned long long int var_15 = 12464590493569707212ULL;
short var_16 = (short)-28247;
long long int var_17 = 6877683631018681589LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
