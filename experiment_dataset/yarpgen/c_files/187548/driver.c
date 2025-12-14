#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17124026383425952634ULL;
unsigned long long int var_4 = 11106677337660297513ULL;
unsigned long long int var_5 = 10649637156604368601ULL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 7816782671541449761ULL;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 6829887800297926434ULL;
_Bool var_12 = (_Bool)1;
short var_14 = (short)20859;
int zero = 0;
unsigned long long int var_18 = 422918625078772688ULL;
unsigned short var_19 = (unsigned short)56854;
long long int var_20 = -6203044881769875585LL;
short var_21 = (short)-18945;
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
