#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49076;
signed char var_12 = (signed char)21;
unsigned int var_13 = 3898357305U;
int var_15 = 1738599477;
unsigned long long int var_16 = 15840959179409755644ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)37;
int var_19 = 1750763292;
long long int var_20 = 1895529606275218108LL;
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
