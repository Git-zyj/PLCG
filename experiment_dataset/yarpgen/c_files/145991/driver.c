#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 830416970U;
unsigned int var_1 = 3385552952U;
unsigned int var_3 = 3234375338U;
signed char var_4 = (signed char)-50;
int var_5 = 1956459720;
unsigned int var_6 = 2254431986U;
int var_7 = 800588557;
unsigned int var_8 = 1480605827U;
unsigned long long int var_10 = 401780953070473876ULL;
int zero = 0;
unsigned int var_11 = 1949009700U;
long long int var_12 = 2969764620965870445LL;
short var_13 = (short)-8776;
_Bool var_14 = (_Bool)0;
short var_15 = (short)19647;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
