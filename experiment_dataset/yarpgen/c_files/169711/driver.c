#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3683516214U;
long long int var_4 = 3993848077576704840LL;
_Bool var_6 = (_Bool)0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)11450;
short var_15 = (short)21402;
int zero = 0;
unsigned long long int var_17 = 3859176751675509510ULL;
long long int var_18 = 4088119726811197843LL;
unsigned int var_19 = 1739527479U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
