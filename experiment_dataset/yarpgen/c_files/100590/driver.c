#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1055508809194395279LL;
long long int var_5 = 1892259803934985027LL;
long long int var_10 = 7490809705500141990LL;
unsigned short var_13 = (unsigned short)50238;
int zero = 0;
unsigned int var_15 = 2510187498U;
unsigned short var_16 = (unsigned short)51844;
unsigned int var_17 = 2994653870U;
void init() {
}

void checksum() {
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
