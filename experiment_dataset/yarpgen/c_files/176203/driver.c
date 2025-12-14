#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)148;
unsigned short var_4 = (unsigned short)23692;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-31013;
_Bool var_7 = (_Bool)1;
long long int var_8 = -5257676018853494240LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)-12;
unsigned short var_13 = (unsigned short)6545;
void init() {
}

void checksum() {
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
