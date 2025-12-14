#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)45;
signed char var_3 = (signed char)0;
short var_5 = (short)29071;
unsigned int var_7 = 2969961610U;
unsigned char var_11 = (unsigned char)91;
short var_13 = (short)-16847;
int var_14 = 58548369;
int zero = 0;
long long int var_15 = 8811873480443845820LL;
unsigned long long int var_16 = 13760075419536939600ULL;
signed char var_17 = (signed char)-59;
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
