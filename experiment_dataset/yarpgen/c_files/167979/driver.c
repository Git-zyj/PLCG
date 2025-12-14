#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)178;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 9278021309051646389ULL;
short var_15 = (short)7630;
unsigned int var_16 = 3232320443U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
