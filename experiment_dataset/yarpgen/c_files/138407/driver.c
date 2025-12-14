#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1040491526;
unsigned short var_6 = (unsigned short)50527;
unsigned long long int var_8 = 16226668062039763263ULL;
short var_13 = (short)-1560;
unsigned long long int var_14 = 364030361464842973ULL;
unsigned long long int var_17 = 8125898511454186016ULL;
signed char var_18 = (signed char)127;
int var_19 = 1867755284;
int zero = 0;
long long int var_20 = -6703334111459089517LL;
_Bool var_21 = (_Bool)1;
long long int var_22 = -1235399421223321285LL;
unsigned short var_23 = (unsigned short)26846;
void init() {
}

void checksum() {
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
