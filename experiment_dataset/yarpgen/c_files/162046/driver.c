#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)44;
unsigned long long int var_3 = 4898051937733410093ULL;
long long int var_5 = -4558879920278613299LL;
unsigned short var_6 = (unsigned short)36760;
unsigned char var_7 = (unsigned char)71;
_Bool var_8 = (_Bool)0;
long long int var_9 = 5371219620959731871LL;
unsigned long long int var_10 = 1494915471678321254ULL;
int zero = 0;
int var_11 = 317759294;
short var_12 = (short)-16043;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)147;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
