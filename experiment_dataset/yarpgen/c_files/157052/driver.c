#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)21783;
unsigned int var_8 = 411799524U;
signed char var_10 = (signed char)7;
unsigned short var_11 = (unsigned short)26530;
long long int var_13 = -7099701488032088600LL;
int zero = 0;
unsigned short var_14 = (unsigned short)63870;
unsigned int var_15 = 3263166521U;
unsigned int var_16 = 3598393132U;
unsigned short var_17 = (unsigned short)34421;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
