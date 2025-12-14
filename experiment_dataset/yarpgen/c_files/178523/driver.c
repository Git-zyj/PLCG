#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6197844264487430258LL;
int var_2 = -1076758264;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 12505356230077161690ULL;
unsigned short var_7 = (unsigned short)31943;
int var_13 = 1760292002;
unsigned long long int var_14 = 12511656464759335270ULL;
unsigned int var_15 = 1839182723U;
int zero = 0;
unsigned long long int var_16 = 5460723376129280624ULL;
unsigned int var_17 = 4106753356U;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
