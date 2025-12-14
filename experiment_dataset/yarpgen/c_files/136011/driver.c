#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11250581823163690148ULL;
short var_7 = (short)-25494;
long long int var_8 = 2495824963263475314LL;
unsigned int var_10 = 2051058357U;
long long int var_11 = -73196054487415009LL;
unsigned char var_12 = (unsigned char)13;
unsigned int var_14 = 1662936820U;
long long int var_15 = -660583895975635802LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = 1174734844;
void init() {
}

void checksum() {
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
