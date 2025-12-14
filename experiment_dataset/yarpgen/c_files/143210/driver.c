#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)85;
_Bool var_1 = (_Bool)1;
long long int var_2 = -6889988159649587422LL;
short var_3 = (short)-32273;
long long int var_5 = -1057678757180408175LL;
signed char var_6 = (signed char)17;
unsigned short var_7 = (unsigned short)42023;
int var_8 = -321556489;
unsigned int var_9 = 1679704317U;
signed char var_10 = (signed char)59;
int var_11 = -222093196;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_14 = 6131633399567200643LL;
unsigned short var_15 = (unsigned short)1688;
void init() {
}

void checksum() {
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
