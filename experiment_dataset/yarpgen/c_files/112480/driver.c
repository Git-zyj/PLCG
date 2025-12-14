#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1789487090U;
unsigned int var_2 = 1787728356U;
_Bool var_3 = (_Bool)1;
unsigned char var_6 = (unsigned char)94;
unsigned short var_10 = (unsigned short)4666;
long long int var_13 = -766504919030564075LL;
unsigned short var_15 = (unsigned short)11374;
int zero = 0;
int var_16 = 71743678;
signed char var_17 = (signed char)-16;
unsigned long long int var_18 = 8653222280790744629ULL;
unsigned int var_19 = 554664225U;
void init() {
}

void checksum() {
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
