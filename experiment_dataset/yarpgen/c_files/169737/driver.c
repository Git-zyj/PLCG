#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 433861211087049706LL;
unsigned int var_5 = 1307683784U;
unsigned short var_6 = (unsigned short)35090;
int var_7 = 2040004299;
unsigned short var_13 = (unsigned short)60670;
int zero = 0;
unsigned char var_15 = (unsigned char)92;
unsigned char var_16 = (unsigned char)152;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
