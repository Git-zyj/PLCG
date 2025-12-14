#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2881894805U;
long long int var_6 = -3257501480039389994LL;
long long int var_7 = -7018041891016349273LL;
unsigned int var_11 = 2287415278U;
unsigned int var_13 = 1107254439U;
signed char var_16 = (signed char)-117;
unsigned int var_17 = 3796618821U;
int zero = 0;
unsigned int var_19 = 4160871294U;
unsigned int var_20 = 3382545682U;
int var_21 = 1207163229;
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
