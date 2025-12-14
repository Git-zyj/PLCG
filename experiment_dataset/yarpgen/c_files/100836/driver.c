#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned int var_5 = 3787555295U;
unsigned int var_6 = 2322111262U;
long long int var_7 = -6191948325857058321LL;
signed char var_12 = (signed char)59;
unsigned int var_14 = 554236585U;
unsigned short var_16 = (unsigned short)25990;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 3788288348U;
long long int var_19 = -3652158681645120041LL;
signed char var_20 = (signed char)92;
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
