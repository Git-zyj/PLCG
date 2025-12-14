#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14964;
unsigned long long int var_9 = 16151810266181667928ULL;
unsigned char var_12 = (unsigned char)69;
unsigned long long int var_13 = 4061558757847496127ULL;
long long int var_14 = 6821117976865381326LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -2771842246589675162LL;
unsigned char var_18 = (unsigned char)42;
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
