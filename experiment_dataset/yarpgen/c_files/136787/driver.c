#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20871;
unsigned char var_1 = (unsigned char)192;
unsigned int var_5 = 4026421904U;
signed char var_6 = (signed char)21;
int var_8 = -871390109;
int var_10 = 82796332;
long long int var_13 = 745069871938136837LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = 1943418621;
int var_16 = 243973822;
void init() {
}

void checksum() {
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
