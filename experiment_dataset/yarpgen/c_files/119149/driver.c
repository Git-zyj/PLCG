#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 18208382038044893053ULL;
signed char var_8 = (signed char)29;
long long int var_15 = -9168225242799123122LL;
int zero = 0;
short var_16 = (short)7398;
_Bool var_17 = (_Bool)1;
long long int var_18 = -4121710103637933102LL;
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
