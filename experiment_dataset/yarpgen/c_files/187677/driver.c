#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4816432987052888069LL;
unsigned long long int var_3 = 2980402129062950355ULL;
int var_6 = -1102624998;
unsigned int var_8 = 1108755579U;
int var_12 = -955832805;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-23149;
unsigned int var_19 = 2967802630U;
short var_20 = (short)-1241;
unsigned long long int var_21 = 12736197539943979557ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
