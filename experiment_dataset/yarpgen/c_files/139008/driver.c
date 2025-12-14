#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17813;
int var_5 = 1696146358;
_Bool var_6 = (_Bool)0;
unsigned long long int var_14 = 147243267556394293ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)42067;
unsigned long long int var_17 = 14694846467838725355ULL;
unsigned long long int var_18 = 12019913415045160244ULL;
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
