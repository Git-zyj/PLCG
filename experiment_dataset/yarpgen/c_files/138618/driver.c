#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21482;
unsigned short var_1 = (unsigned short)17279;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 17725397375418345413ULL;
unsigned char var_8 = (unsigned char)198;
unsigned long long int var_9 = 8657479227526124709ULL;
int zero = 0;
int var_10 = -569484214;
unsigned int var_11 = 2237028346U;
unsigned char var_12 = (unsigned char)39;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
