#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48376;
signed char var_5 = (signed char)86;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)87;
signed char var_13 = (signed char)22;
long long int var_14 = 5259467112777370097LL;
signed char var_15 = (signed char)91;
unsigned long long int var_16 = 11672546106940088228ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)37195;
_Bool var_18 = (_Bool)1;
long long int var_19 = -6762985480880711706LL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
