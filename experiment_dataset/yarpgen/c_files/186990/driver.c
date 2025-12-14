#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4419772098105531520ULL;
unsigned short var_7 = (unsigned short)42266;
signed char var_8 = (signed char)80;
unsigned long long int var_10 = 17930211578083271691ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 3506795436U;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)19674;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
