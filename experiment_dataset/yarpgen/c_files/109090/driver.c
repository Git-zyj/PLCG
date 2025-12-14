#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_1 = 854558347U;
long long int var_2 = 1050532488655622078LL;
long long int var_3 = -80549852703376730LL;
signed char var_4 = (signed char)47;
unsigned long long int var_7 = 13239667547942574891ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)39449;
long long int var_11 = -2069308067111997834LL;
long long int var_12 = -3607942541628638013LL;
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
