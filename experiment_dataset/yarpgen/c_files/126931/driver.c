#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64336;
_Bool var_3 = (_Bool)1;
long long int var_6 = 8984674184042378162LL;
unsigned int var_7 = 796553366U;
unsigned short var_8 = (unsigned short)28859;
long long int var_9 = 1503692444302927996LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_12 = -4540500665417825369LL;
long long int var_13 = -5984471916471070303LL;
short var_14 = (short)-15270;
int var_15 = 1314383203;
void init() {
}

void checksum() {
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
