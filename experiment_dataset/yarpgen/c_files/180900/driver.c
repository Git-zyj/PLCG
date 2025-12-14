#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
int var_7 = 957811575;
unsigned char var_8 = (unsigned char)146;
unsigned short var_9 = (unsigned short)12656;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)76;
unsigned long long int var_13 = 11025664452246988180ULL;
short var_14 = (short)-7343;
long long int var_15 = 5783749889206307670LL;
short var_16 = (short)10713;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
