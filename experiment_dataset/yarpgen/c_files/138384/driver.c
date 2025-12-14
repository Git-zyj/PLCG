#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17526177617199225581ULL;
int var_7 = -1451783187;
short var_9 = (short)-20146;
long long int var_10 = -7438392784273830566LL;
int var_13 = 2099718760;
unsigned int var_15 = 1530654125U;
unsigned char var_17 = (unsigned char)107;
int var_18 = -1354086307;
int zero = 0;
unsigned short var_19 = (unsigned short)46903;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-7177;
signed char var_22 = (signed char)4;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
