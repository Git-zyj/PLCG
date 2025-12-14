#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55825;
unsigned char var_1 = (unsigned char)5;
short var_3 = (short)-3457;
_Bool var_5 = (_Bool)1;
unsigned short var_10 = (unsigned short)22462;
long long int var_11 = 6877671057051988793LL;
short var_12 = (short)19402;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)84;
unsigned long long int var_19 = 4626479313407486170ULL;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-5321;
void init() {
}

void checksum() {
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
