#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63714;
unsigned int var_1 = 947436048U;
int var_3 = 2036458204;
int var_4 = 445576575;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 3825391790U;
unsigned char var_12 = (unsigned char)79;
unsigned int var_13 = 912659996U;
int zero = 0;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)38342;
short var_17 = (short)-23650;
unsigned char var_18 = (unsigned char)227;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
