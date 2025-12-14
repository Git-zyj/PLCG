#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1513631215;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)34;
unsigned short var_5 = (unsigned short)51550;
int var_9 = 2132664054;
unsigned short var_10 = (unsigned short)23552;
signed char var_11 = (signed char)14;
unsigned char var_12 = (unsigned char)87;
long long int var_13 = -4921957156131768863LL;
signed char var_15 = (signed char)31;
int zero = 0;
long long int var_16 = 8716265040063810563LL;
short var_17 = (short)5571;
int var_18 = -1429627733;
long long int var_19 = -1036839963443111446LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
