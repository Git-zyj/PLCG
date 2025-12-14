#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2986399621U;
unsigned short var_7 = (unsigned short)14099;
long long int var_8 = -8879696115026196778LL;
unsigned long long int var_9 = 15460660969227701368ULL;
short var_10 = (short)-29944;
unsigned short var_11 = (unsigned short)15667;
unsigned long long int var_12 = 9879283412198676998ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)49;
short var_16 = (short)-17122;
int var_17 = 1107327091;
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
