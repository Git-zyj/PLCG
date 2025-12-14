#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25067;
_Bool var_4 = (_Bool)1;
int var_7 = -1157968342;
long long int var_9 = 5283600610369491762LL;
_Bool var_14 = (_Bool)0;
long long int var_17 = -7119455971967290100LL;
short var_18 = (short)-17736;
int var_19 = 608073798;
int zero = 0;
unsigned int var_20 = 707746088U;
unsigned int var_21 = 1109409275U;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
