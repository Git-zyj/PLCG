#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6984496106628060489LL;
short var_1 = (short)-30960;
_Bool var_3 = (_Bool)1;
unsigned char var_7 = (unsigned char)121;
int var_8 = -1753856388;
short var_9 = (short)30108;
short var_11 = (short)27625;
int zero = 0;
long long int var_12 = -5637292975378262078LL;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
int var_16 = -473234862;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
