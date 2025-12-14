#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)132;
long long int var_1 = -5035110659456150280LL;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)0;
int var_8 = -1753091695;
int var_9 = 1191561043;
signed char var_10 = (signed char)64;
int zero = 0;
unsigned char var_11 = (unsigned char)45;
short var_12 = (short)9288;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
