#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 13377395539643534499ULL;
unsigned char var_6 = (unsigned char)138;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)225;
short var_10 = (short)1896;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)59052;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 12304305355010938653ULL;
unsigned char var_19 = (unsigned char)137;
unsigned short var_20 = (unsigned short)6857;
unsigned short var_21 = (unsigned short)57402;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
