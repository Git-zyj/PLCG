#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = 671352084;
unsigned int var_9 = 1419922315U;
short var_12 = (short)-21393;
unsigned long long int var_14 = 11829961910449391572ULL;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)62998;
long long int var_17 = 4087743239017662642LL;
_Bool var_18 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)-119;
unsigned int var_20 = 1860780257U;
int var_21 = 956598075;
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
