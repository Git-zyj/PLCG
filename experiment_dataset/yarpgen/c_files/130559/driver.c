#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11239657995224444016ULL;
long long int var_2 = -7244533104108434221LL;
_Bool var_3 = (_Bool)0;
int var_7 = 1556744534;
long long int var_10 = -8346499219622476438LL;
unsigned short var_12 = (unsigned short)4130;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-30226;
void init() {
}

void checksum() {
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
