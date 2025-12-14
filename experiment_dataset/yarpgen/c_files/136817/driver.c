#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)60675;
unsigned int var_3 = 1502822427U;
unsigned short var_4 = (unsigned short)18658;
short var_5 = (short)28810;
long long int var_7 = -7302931107300178528LL;
unsigned int var_9 = 2898798552U;
short var_10 = (short)7052;
unsigned int var_11 = 3414792964U;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 3567803191U;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
long long int var_17 = 7089162733093462849LL;
unsigned short var_18 = (unsigned short)851;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
