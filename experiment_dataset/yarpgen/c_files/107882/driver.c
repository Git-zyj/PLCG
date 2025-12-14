#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-62;
int var_5 = 247051121;
unsigned int var_6 = 1712767722U;
unsigned int var_7 = 1627748039U;
unsigned int var_8 = 2312829188U;
short var_12 = (short)24574;
int zero = 0;
unsigned int var_15 = 3951126833U;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 8068303781834126622ULL;
_Bool var_18 = (_Bool)1;
long long int var_19 = -1238309600039802607LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
