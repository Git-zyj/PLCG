#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1658888919531696216LL;
unsigned short var_4 = (unsigned short)33836;
int var_5 = -552824622;
int var_7 = 782621559;
short var_13 = (short)-22288;
long long int var_16 = -5183376635137252427LL;
int zero = 0;
unsigned char var_19 = (unsigned char)174;
unsigned char var_20 = (unsigned char)29;
signed char var_21 = (signed char)-45;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
