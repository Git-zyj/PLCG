#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6291096537162608957LL;
unsigned long long int var_8 = 18232763234706818735ULL;
short var_9 = (short)3757;
unsigned int var_10 = 1760985842U;
unsigned short var_14 = (unsigned short)47836;
long long int var_15 = 5444450791891987081LL;
int zero = 0;
unsigned int var_16 = 3946117871U;
unsigned short var_17 = (unsigned short)5677;
signed char var_18 = (signed char)5;
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
