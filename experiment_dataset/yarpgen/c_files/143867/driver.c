#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_3 = 4841621801376306476LL;
_Bool var_5 = (_Bool)0;
unsigned long long int var_9 = 9086369070094795024ULL;
signed char var_10 = (signed char)91;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)28;
signed char var_18 = (signed char)94;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
