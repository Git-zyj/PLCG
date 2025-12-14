#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20062;
unsigned short var_2 = (unsigned short)6680;
unsigned int var_4 = 3880879259U;
unsigned char var_5 = (unsigned char)164;
unsigned char var_10 = (unsigned char)244;
unsigned short var_12 = (unsigned short)3457;
short var_16 = (short)-5427;
int zero = 0;
unsigned int var_18 = 1161702295U;
unsigned int var_19 = 2028806610U;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
