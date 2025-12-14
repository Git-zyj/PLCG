#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1845830291;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-32068;
signed char var_7 = (signed char)-46;
int zero = 0;
unsigned int var_15 = 2178210271U;
unsigned short var_16 = (unsigned short)36855;
short var_17 = (short)-3771;
int var_18 = -1713945405;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
