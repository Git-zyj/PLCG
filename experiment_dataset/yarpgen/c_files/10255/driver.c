#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)60647;
unsigned long long int var_4 = 13068914520590321099ULL;
_Bool var_5 = (_Bool)1;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 1783070965162699481ULL;
long long int var_16 = -5251589155882022783LL;
unsigned short var_17 = (unsigned short)37092;
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
