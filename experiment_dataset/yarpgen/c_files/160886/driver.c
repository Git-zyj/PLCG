#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 905284754702655940LL;
unsigned int var_4 = 1484297936U;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)1;
short var_9 = (short)7743;
int zero = 0;
unsigned long long int var_15 = 1251529512519512488ULL;
long long int var_16 = 4406088818120801120LL;
long long int var_17 = -3408649161606859985LL;
long long int var_18 = -9124420693749111818LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
