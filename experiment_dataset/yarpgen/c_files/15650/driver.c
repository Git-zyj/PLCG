#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16409618129658243415ULL;
int var_1 = -347806457;
_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)29693;
_Bool var_10 = (_Bool)1;
int var_11 = 546760191;
unsigned short var_19 = (unsigned short)45349;
int zero = 0;
unsigned int var_20 = 3790476789U;
unsigned int var_21 = 3974559147U;
void init() {
}

void checksum() {
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
