#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_3 = 3157100071U;
unsigned long long int var_7 = 2969262516893828544ULL;
_Bool var_12 = (_Bool)0;
int var_17 = -102046147;
int zero = 0;
signed char var_18 = (signed char)32;
unsigned long long int var_19 = 5354508275940042225ULL;
long long int var_20 = 526501220177456215LL;
short var_21 = (short)30718;
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
