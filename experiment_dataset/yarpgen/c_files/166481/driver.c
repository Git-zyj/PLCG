#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = -1761776994;
short var_3 = (short)23257;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 3014793858U;
int var_11 = -846542389;
unsigned int var_14 = 3983949647U;
signed char var_15 = (signed char)-28;
int zero = 0;
signed char var_18 = (signed char)87;
short var_19 = (short)18294;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
